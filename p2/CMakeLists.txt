set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

add_executable(p2 p2.c multi_thread_spawn.c multi_thread_spawn.h)

target_link_libraries(p2 PRIVATE pthread)
target_link_libraries(p2 PRIVATE common)
target_compile_options(p2 PRIVATE -g -Wall -Wextra -Wpedantic -Werror)
target_compile_definitions(p2 PRIVATE _POSIX_C_SOURCE=200809L)