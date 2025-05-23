#include <iostream>

/*
Задача 3. Кожаный мешок.

На этот раз нужно написать фрагмент кода для прошивки робота. Как мы знаем,
роботы понимают только нули и единицы, других цифр для них не существует.
Напишите программу, которая проверяет, состоит ли число только из нулей и
единиц.
*/

int main() {
  int number;
  std::cout << "Введите ваше число: ";
  std::cin >> number;
  while (number > 0) {
    int temp;
    temp = number % 10;
    if (temp == 0 || temp == 1) {
      number /= 10;
    } else {
      std::cout << "Число не состоит из нулей и единиц" << std::endl;
      break;
    }
  }
  if (number == 0) {
    std::cout << "Число состоит из нулей и единиц" << std::endl;
  }
}
