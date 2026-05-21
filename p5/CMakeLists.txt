set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

add_executable(p5 p5.c)
target_link_libraries(p5 PRIVATE pthread)
target_link_libraries(p5 PRIVATE common)
target_compile_options(p5 PRIVATE -g -Wall -Wextra -Wpedantic -Werror)
target_compile_definitions(p5 PRIVATE _POSIX_C_SOURCE=200809L)