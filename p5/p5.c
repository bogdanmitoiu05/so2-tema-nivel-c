#include <stdio.h>
#include <thread_pool.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
void print_help(const char* prog_name)
{
    fprintf(stderr, "Usage: %s -s <marimeaThreadPool> \n",
        prog_name);
}
THREAD_METHOD(thread_func)
{
    sleep(1);
    RETURN;
}
int main(int argc, char* const* argv)
{
    int opt;
    size_t thread_pool_size = 0;
    while ((opt = getopt(argc, argv, "hs:")) != -1) {
        switch (opt) {
        case 's': // marimea thread pool-ului
            thread_pool_size = strtol(optarg, NULL, 10);
            if (thread_pool_size == 0)
            {
                fprintf(stderr, "Invalid number %s\n",optarg);
                return EXIT_FAILURE;
            }
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
    thread_pool_t* pool = thread_pool_new(thread_pool_size);

    for (size_t i = 0; i<100; ++i) //creem 100 de sarcini
    {
        task_t* task = task_new(thread_func, NULL);
        thread_pool_submit(pool,task);
    }

    thread_pool_wait_all(pool); // asteptam finalizarea
    thread_pool_destroy(pool); // curatam
    return 0;
}
