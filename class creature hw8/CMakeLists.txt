cmake_minimum_required(VERSION 3.11)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_COMPILER i586-mingw32msvc-g++)

# Название проекта
project(evolProject VERSION 1.0 LANGUAGES CXX)

# Основное приложение
add_executable(evolApp evolution.cpp)