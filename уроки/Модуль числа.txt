#include <iostream>

/*
Задача 3. Модуль числа.

Напишите программу, которая вычисляет модуль числа.
*/

int modul() {

  int number;
  std::cout << "\n\n\nВведите число: ";
  std::cin >> number;
  if (number < 0)
    number *= -1;
  std::cout << "Модуль числа равен " << number << "\n";
  return 0;
}
