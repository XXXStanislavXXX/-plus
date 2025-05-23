#include <iostream>
#include <cmath>

/*
Задача 3. Таблица степеней.

Напишите программу, которая выводила бы N первых степеней числа К. Посмотрите, что случится, если N или K будут достаточно большими.
*/

int main() {
    int n, k;
    std::cout << "Введите число: ";
    std::cin >> n;
    std::cout << "Введите степень: ";
    std::cin >> k;
    for (int i = 1; i <= n; i++){
        std::cout << i << " в степени " << k << " = " << pow(i, k) << std::endl;
    }
}
