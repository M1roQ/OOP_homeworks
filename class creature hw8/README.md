# Домашнее задание №8

8.1. Эволюция:
1. Создать последовательную иерархию наследования существ:
  a) generic creature - общий родитель
  b) ocean creature - наследник умеющий плавать
  c) amphibious - наследник умеющий плавать и ходить
  d) terrestrial creature - не умеет плавать, но умеет ходить
  e) bird - умеет ходить и летать
  f) waterfowl - водоплавающая птица. Умеет ходить, летать и плавать.
2. Использовать только модификаторы доступа (без виртуальных функций)


# Сборка и запуск проекта
`CMakeLists.txt` собирает проект `evolApp`.

**Для сборки** проекта выполните команды из папки проекта:
```
cmake -S. -B build
cmake --build build
```

**Для запуска:**
Перейти в папку `build` 
```
cd build
```
Далее выполнить запуск проекта командой 
```
./evolApp
```
