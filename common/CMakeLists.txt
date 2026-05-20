set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

add_library(common task.c
        thread_pool.c
        task_queue.c
        task.c
        multi_thread_spawn.c
)
target_sources(common PUBLIC FILE_SET HEADERS FILES task.h task_queue.h utils.h multi_thread_spawn.h BASE_DIRS .)
target_link_libraries(common PRIVATE pthread)
target_compile_options(common PRIVATE -g -Wall -Wextra -Wpedantic -Werror)
target_compile_definitions(common PRIVATE _POSIX_C_SOURCE=200809L)