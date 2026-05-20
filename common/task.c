//
// Created by thonkdifferent on 20.05.26.
//

#include "task.h"

#include "utils.h"

task_t* task_new(bool(* func)(void*), void* arg)
{
    ENSURE_NOTNULL_RNULL(func);
    task_t* task = new(task_t);
    task->func = func;
    task-> arg = arg;
    task->next = NULL;
    return task;
}

void task_destroy(task_t* task)
{
    ENSURE_NOTNULL(task); // nu permite free pe NULL
    free(task);
}
