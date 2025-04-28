#include <iostream>

/*
  Задача 1. Калькулятор скидки.

  Вы покупаете 3 товара в магазине. Если сумма вашего чека превышает 10 000
  руб, вам будет сделана скидка 10%. Напишите программу которая запрашивает 3
  стоимости товара и вычисляет сумму чека.
*/

int discount() {
  int firstProduct;
  std::cout << "Введите стоимость первого товара: ";
  std::cin >> firstProduct;
  int secondProduct;
  std::cout << "Введите стоимость второго товара: ";
  std::cin >> secondProduct;
  int thirdProduct;
  std::cout << "Введите стоимость третьего товара: ";
  std::cin >> thirdProduct;
  int totalPrice = firstProduct + secondProduct + thirdProduct;
  if (totalPrice > 10000) {
    std::cout << "Сумма вашего чека превышает 10000 рублей, вам предоставлена "
                 "скидка 10%!\n <<<"
              << totalPrice * 0.1 << " рублей скидки!>>>";
    totalPrice -= totalPrice * 0.1;
  }
  std::cout << "\n Сумма вашего чека: " << totalPrice << "\n";
  return 0;
}
