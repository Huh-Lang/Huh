cmake_minimum_required(VERSION 3.24)
project(Huh C)
message("==================================================================")
message("C Standard: C23")
set(CMAKE_C_STANDARD 23)

set(SRC src/tool/result.c src/tool/result.h src/main.c src/cli/cli.c src/cli/cli.h src/lexer.h)

add_executable(${PROJECT_NAME} ${SRC} "src/lexer.h")