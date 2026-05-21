//
// Created by thonkdifferent on 21.05.26.
//

#include "multi_thread_spawn.h"

#include <assert.h>
#include <stdio.h>
#include <utils.h>
pthread_t* spawn_many(size_t noThreads, void*(* func)(void*))
{
    ENSURE_NOTNULL_RNULL(func);
    pthread_t* threads = calloc(noThreads, sizeof(pthread_t)); // creem spatiu pentru noThreads fire de executie
    for (size_t i = 0; i < noThreads; ++i)
    {
        printf("Spawning thread\n");
        pthread_create(&threads[i], NULL, func, NULL);
    }
    return threads;
}

void wait_all(pthread_t* threads, size_t noThreads)
{
    ENSURE_NOTNULL(threads);
    assert(noThreads > 0); // verificare anti-neatenție
    for (size_t i = 0; i < noThreads; ++i)
    {
        pthread_join(threads[i], NULL); //aplicăm join pe ficare fir
        printf("Thread joined\n");
    }

}
