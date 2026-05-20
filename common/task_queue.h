//
// Created by thonkdifferent on 20.05.26.
//

#ifndef TEMA3_NIVC_THREAD_QUEUE_H
#define TEMA3_NIVC_THREAD_QUEUE_H
#include "task.h"

/**
 * Structură ce reprezintă o coadă de sarcini de executat
 */
typedef struct task_queue
{
    task_t* front; // capul din față
    task_t* back; // capul din spate
}task_queue_t;

/**
 * Instanțiază o nouă coadă de sarcini
 * @return Noua coadă de sarcini sau NULL dacă a apărut o eroare
 */
task_queue_t* task_queue_new(void);
/**
 * Adaugă o sarcină nouă în coadă
 * @param task_queue Coada în care să se adauge
 * @param task Sarcina de adăugat
 * @see task.h
 */
void task_queue_add(task_queue_t* task_queue, task_t* task);
/**
 * Extrage primul element din coadă. Extragerea va elimina elementul din coadă
 * @param task_queue Coada de sarcini
 * @return Primul element sau NULL dacă a apărut o eroare sau coada este goală
 */
task_t* task_queue_pop_front(task_queue_t* task_queue);
/**
 * Distruge o coadă de sarcini.
 * @param task_queue Coada de distrus
 */
void task_queue_destroy(task_queue_t* task_queue);
#endif //TEMA3_NIVC_THREAD_QUEUE_H
