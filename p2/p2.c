#include <stdio.h>
#include "multi_thread_spawn.h"
#include <thread_pool.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
void print_help(const char* prog_name)
{
    fprintf(stderr, "Usage: %s -e pure_thread/thread_pool \n",
        prog_name);
}
void* pureThreadFunc(__attribute_maybe_unused__ void* arg)
{
    sleep(2);
    return NULL;
}
THREAD_METHOD(threadPoolFunc)
{
    sleep(2);
    RETURN;
}
int main(int argc, char* const* argv)
{
    int opt;
    char execution_method[32] ={0,};
    while ((opt = getopt(argc, argv, "he:")) != -1) {
        switch (opt) {
        case 'e': // execution method
            strncpy(execution_method, optarg,31);
            break;
        case 'h':
            print_help(argv[0]);
            return 0;
        default: /* '?' */
            fprintf(stderr, "Invalid argument %c\n", opt);
            print_help(argv[0]);
            exit(EXIT_FAILURE);
        }
    }
    if (strcmp(execution_method,"pure_thread") == 0) //-e pure_thread ruleaza cele 1000 de fire de executie
    {
        pthread_t* threads = spawn_many(1000, pureThreadFunc);
        wait_all(threads,1000);
    }
    else if (strcmp(execution_method, "thread_pool") == 0) //-e thread_pool, ruleaza thread pool
    {
        thread_pool_t* thread_pool = thread_pool_new(10); // 10 thread-uri pe thread pool
        for (size_t i = 0; i < 1000; ++i) //spawnam 1000 de sarcini
        {
            task_t* task = task_new(threadPoolFunc,NULL);
            thread_pool_submit(thread_pool, task);
        }

        thread_pool_wait_all(thread_pool); // asteptam toate sarcinile
        thread_pool_destroy(thread_pool); //curatare
    }
    else
    {
        fprintf(stderr, "Invalid  execution method %s", execution_method);
        return EXIT_FAILURE;
    }
    return 0;
}
