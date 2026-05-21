//
// Created by thonkdifferent on 20.05.26.
//

#ifndef TEMA3_NIVC_TASK_H
#define TEMA3_NIVC_TASK_H
#include <stdbool.h>

/**
 * Structură ce definește o sarcină de executat
 *
 * N.B. Este indicat ca funcția din cadrul fiecărui fir să NU conțină bucle. Thread pool-ul se va ocupa de implementarea
 * mecanismelor de ascultare a semnalelor interne de oprire. În cazul în care funcția conține bucle, este recomandat să
 * fie în așa fel restructurată bucla astfel încât să poată fi apelată macrocomanda YIELD pentru a ceda controlul sistemului
 * de control al firelor de control a execuției.
 *
 * Funcția va fi apelată la infinit până când aceasta va folosi macromanda RETURN ce semnalizează finalizarea sarcinii de lucru
 */
typedef struct task
{
    bool (*func)(void*);
    void* arg;
    struct task* next;
} task_t;

/**
 * Crează o nouă sarcină de lucru bazată pe funcția func
 * @param func Sarcina de lucru
 * @param arg Argumentul funcției sarcinii de lucru
 * @return true dacă sarcina s-a finalizat, false altfel.
 * @see Macrocomenzile YIELD și RETURN
 */
task_t* task_new(bool (*func)(void*), void* arg);
/**
 * Destructor pentru sarcină
 * @param task sarcina de distrus
 */
void task_destroy(task_t* task);

/**
 * Secțiunea de macrocomenzi utile
 */

/**
 * Definește o nouă metodă de fir de excuție din cadrul thread pool ce se conformă specificației precizate.
 *
 * @see above
 */
#define THREAD_METHOD(name) bool name(__attribute_maybe_unused__ void* arg)

/**
 * Convertește argumentul primit în tipul de date T
 *
 * ATENȚIE: Această macrocomandă NU face verificări asupra conversiei, întrucât limbajul C nu ne permite acest lucru
 * @param T Tipul de date țintă
 */
#define ARG_AS(T) (T) arg
/**
 * Cedează controlul temporar la sistemul de control al firelor de execuției
 */
#define YIELD return false;
/**
 * Marchează terminarea execuției metodei și permite firului de execuție să preia o altă sarcină
 */
#define RETURN return true;
#endif //TEMA3_NIVC_TASK_H
