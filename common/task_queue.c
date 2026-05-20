//
// Created by thonkdifferent on 20.05.26.
//

#include "task_queue.h"

#include "utils.h"

task_queue_t* task_queue_new(void)
{
    //Instanțiază și inițializeză
    task_queue_t* task_queue = new(task_queue_t);
    ENSURE_NOTNULL_RNULL(task_queue);
    task_queue->back = NULL;
    task_queue->front = NULL;
    return task_queue;
}

void task_queue_add(task_queue_t* task_queue, task_t* task)
{
    //Nu putem executa operația dacă unul dintre operatori este null
    ENSURE_NOTNULL(task_queue);
    ENSURE_NOTNULL(task);

    // Dacă coada este goală, setăm pointerul din față la noul task
    if (task_queue->front == NULL)
        task_queue->front = task;
    if (task_queue->back) // Dacă coada NU este goală, vom pune taskul în continuarea ultimului curent
        task_queue->back->next = task;
    task_queue->back = task; // În orice caz, pointerul final trebuie modificat
}

task_t* task_queue_pop_front(task_queue_t* task_queue)
{
    ENSURE_NOTNULL_RNULL(task_queue); //Asigură-te că pointerul la coadă nu este NULL
    if (task_queue->front == NULL)
        return NULL;
    task_t* task = task_queue->front; // ia primul element
    task_queue->front = task_queue->front->next; // mută pointerul în față
    if (task_queue->front == NULL) // dacă s-a golit coada
        task_queue->back = NULL; // setează și pointerul din spate la NULL;
    return task;
}

void task_queue_destroy(task_queue_t* task_queue)
{
    ENSURE_NOTNULL(task_queue); // nu putem elibera NULL
    task_t* task = NULL;
    while (task_queue->front!=NULL)
    {
        task = task_queue_pop_front(task_queue);
        task_destroy(task);
    }
    free(task_queue);
}
