//
// Created by thonkdifferent on 20.05.26.
//

#include "thread_pool.h"

#include <assert.h>
#include <stdio.h>
#include <unistd.h>

#include "utils.h"
static pthread_cond_t queueHasElements = PTHREAD_COND_INITIALIZER;
static pthread_mutex_t lockMutex = PTHREAD_MUTEX_INITIALIZER;

/**
 * Functia worker
 * @param thread_pool thread pool-ul de care apartin firele worker
 * @return NULL
 */
void* thread_runner(void* thread_pool)
{
    thread_pool_t* tp = (thread_pool_t*) thread_pool;
    bool funcFinalized = true; // verificăm dacă funcția s-a finalizat (RETURN) pentru a putea trece la următoarea
                               //sarcină
    task_t* task = NULL;
    printf("Starting thread %lu\n", pthread_self());
    while (!tp->stopFlag) //cat timp nu nu s-a spus sa ne oprim
    {
        if (funcFinalized) // daca s-a terminat functia, ia o alta sarcina
        {
            pthread_mutex_lock(&lockMutex); //blochează coada și așteaptă un element
            while (tp->queue->front == NULL)
                pthread_cond_wait(&queueHasElements,&lockMutex);
            task = task_queue_pop_front(tp->queue);
            pthread_mutex_unlock(&lockMutex);
        }
        if (task == NULL) break; //s-a primit semnalul de oprire
        printf("Thread %lu found task. Running\n",pthread_self());
        funcFinalized = task->func(task->arg);
        if (funcFinalized)
        {
            task_destroy(task);
            printf("Thread %lu finalized\n",pthread_self());
        }
    }
    return NULL;
}
thread_pool_t* thread_pool_new(size_t threadCount)
{
    ENSURE_FULL(threadCount, 0, NULL); // Nu are sens să acceptăm un thread pool cu 0 fire admise
    thread_pool_t* thread_pool = new(thread_pool_t);
    ENSURE_NOTNULL_RNULL(thread_pool);

    thread_pool->stopFlag = false;
    thread_pool->threadCount = threadCount;
    thread_pool->threads = calloc(threadCount, sizeof(pthread_t));
    thread_pool->queue = task_queue_new();
    for (size_t i = 0; i<threadCount;++i)
    {
        pthread_create(&thread_pool->threads[i], NULL, thread_runner,thread_pool);
    }

    return thread_pool;

}

void thread_pool_destroy(thread_pool_t* thread_pool)
{
    ENSURE_NOTNULL(thread_pool);
    thread_pool_stop_all(thread_pool); //oprește toate firele de execuție, dacă mai sunt
    task_queue_destroy(thread_pool->queue); //  eliberează coada
    free(thread_pool->threads); // elibereaza spatiul pt fire
    free(thread_pool); // elibereaza

}

void thread_pool_submit(thread_pool_t* thread_pool, task_t* task)
{
    ENSURE_NOTNULL(thread_pool);
    ENSURE_NOTNULL(task);
    pthread_mutex_lock(&lockMutex); //blocheaza accesul in coada si adaduga noua sarcina

    task_queue_add(thread_pool->queue,task);

    pthread_cond_signal(&queueHasElements);
    pthread_mutex_unlock(&lockMutex); // am terminat, deblocheaza
}

void thread_pool_wait_all(thread_pool_t* thread_pool)
{
    ENSURE_NOTNULL(thread_pool);
    while (thread_pool->queue->front != NULL)
    {
        sleep(1);
    }
    thread_pool_stop_all(thread_pool);
}
void thread_pool_stop_all(thread_pool_t* thread_pool)
{
    ENSURE_NOTNULL(thread_pool);
    thread_pool->stopFlag = true; // setam flagul de oprire
    pthread_cond_broadcast(&queueHasElements); // trezim toate firele sa se opreasca
    for (size_t i = 0; i < thread_pool->threadCount; ++i)
    {
        pthread_join(thread_pool->threads[i],NULL); // asteptam finalizarea tuturor proceselor
    }
}
