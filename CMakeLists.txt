cmake_minimum_required(VERSION 3.10)
project(calculator_project)

# Добавляем библиотеку
add_library(calculator STATIC src/calculator.cpp)

# Добавляем исполняемый файл
add_executable(main src/main.c)

# Указываем путь к заголовкам для библиотеки и исполняемого файла
target_include_directories(calculator PRIVATE include)
target_include_directories(main PRIVATE include)

# Связываем библиотеку с исполняемым файлом
target_link_libraries(main calculator)