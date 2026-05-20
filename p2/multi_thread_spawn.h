//
// Created by thonkdifferent on 21.05.26.
//

#ifndef TEMA3_NIVC_MULTI_THREAD_SPAWN_H
#define TEMA3_NIVC_MULTI_THREAD_SPAWN_H
#include <pthread.h>
/**
 * Functie ajutatoare de spawnare a multe thread-uri
 * @param noThreads Câte thread-uri să se spawneze
 * @param func Funcția pentru fiecare fir
 * @return Vector de fire de execuție
 */
pthread_t* spawn_many(size_t noThreads, void* (*func)(void*) );
/**
 * Așteaptă un șir de fire de execuție
 * @param threads Vector de fire de execuție
 * @param noThreads Numărul de fire de execuție din interiorul vectorului
 */
void wait_all(pthread_t* threads, size_t noThreads);
#endif //TEMA3_NIVC_MULTI_THREAD_SPAWN_H
