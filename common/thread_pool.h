//
// Created by thonkdifferent on 20.05.26.
//

#ifndef TEMA3_NIVC_THREAD_POOL_H
#define TEMA3_NIVC_THREAD_POOL_H
#include <pthread.h>
#include "task.h"
#include "task_queue.h"
#include <stdbool.h>

/**
 * Structură ce definește un thread pool. Fiecare thread pool are ca element unic de configurare
 * numărul maxim de fire ce pot să fie conținute în acest thread pool
 *
 */
typedef struct thread_pool
{
    pthread_t* threads;
    size_t threadCount;
    bool stopFlag;
    task_queue_t* queue;

}thread_pool_t;


/**
 * Crează un nou thread pool cu un număr maxim specificat de fire de execuție
 * @param threadCount Număr de fire maxim admis în acest thread pool
 * @return Un nou thread pool sau NULL la eroare
 */
thread_pool_t* thread_pool_new(size_t threadCount);
/**
 * Distruge un thread pool
 * @param thread_pool thread pool-ul de distrus
 */
void thread_pool_destroy(thread_pool_t* thread_pool);
/**
 * Trimite o sarcină spre execuție
 * @param thread_pool Thread pool-ul ce va executa sarcina
 * @param task Sarcina
 */
void thread_pool_submit(thread_pool_t* thread_pool, task_t* task);

/**
 * Închide toate firele de execuție dintr-un thread pool
 * @param thread_pool Thread pool-ul în care să se trimită notificarea
 */
void thread_pool_stop_all(thread_pool_t* thread_pool);
/**
 * Astepta finalizarea tuturor firelor
 * @param thread_pool thread pool-ul pentru care vrem sa asteptam
 */
void thread_pool_wait_all(thread_pool_t* thread_pool);
#endif //TEMA3_NIVC_THREAD_POOL_H
