#include <iostream>

/*
Задача 2. Автомобиль.

Автомобиль выехал из Москвы в Рязань. Напишите программу, которая вычисляет
сумеет ли добраться автомобиль до Рязани за два часа с заданной пользователем
средней скоростью движения. Программа должна выводить вычисленное расстояние,
а если автомобиль сумеет добраться до Рязани, - сообщение “Вы приехали”.
Расстояние между городами - 200 км.
*/

int main() {
setlocale(LC_ALL, "Russian");
  int distance = 200;
  int speed;
  std::cout << "\n\n\nEnter cars speed: ";
  std::cin >> speed;
  int time = 2;
  if (speed * time >= distance)
    std::cout << "Your on place!\n";
  else
    std::cout << "Not fast enough!\n";
  std::cout << "You done " << speed * time << " kilometers\n";
  return 0;
}
