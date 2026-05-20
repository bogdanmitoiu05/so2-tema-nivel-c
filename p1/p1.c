#include <stdio.h>
#include "../common/task.h"
#include "thread_pool.h"
#include "../common/task_queue.h"
#include <unistd.h>

THREAD_METHOD(process_movie)
{
    sleep(1);
    RETURN;
}

int main(void)
{
    thread_pool_t* thread_pool = thread_pool_new(5);
    for (size_t i = 0; i < 50; ++i)
    {
        task_t* task = task_new(process_movie, NULL);
        thread_pool_submit(thread_pool,task);
    }
    thread_pool_wait_all(thread_pool);
    return 0;
}
