set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

add_executable(p1 p1.c)

target_link_libraries(p1 PRIVATE pthread)
target_link_libraries(p1 PRIVATE common)
target_compile_options(p1 PRIVATE -g -Wall -Wextra -Wpedantic -Werror)
target_compile_definitions(p1 PRIVATE _POSIX_C_SOURCE=200809L)