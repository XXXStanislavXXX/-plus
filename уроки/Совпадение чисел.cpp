#include <iostream>

/*
Задача 4. Совпадение чисел(необязательная).

Напишите программу, которая по трем введенным числам a, b, c определяет, сколько
среди них совпадающих чисел.

Подсказка: Совпадающих может быть 0, 2 или 3. Например, если введены числа 5 1
5, то ответ должен быть “2 совпадающих”, если -1 -2 -3, то ответ должен быть “0
совпадающих”.


*/

int identicalNumbers() {
  std::cout << "Введите 3 числа: \n";
  int a, b, c;
  std::cin >> a >> b >> c;
  if (a == b && b == c) {
    std::cout << "3 совпадающих";
  } else if (a == b || b == c || a == c) {
    std::cout << "2 совпадающих";
  } else {
    std::cout << "0 совпадающих";
  }
  return 0;
}
