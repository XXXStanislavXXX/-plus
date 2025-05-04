#include <iostream>

/*
Задача 2. Сумма чисел (цикл for).
Перепишите программу из прошлого модуля, используя цикл for. У бухгалтера
сломались счеты. Напишите программу, которая считала бы сумму вводимых чисел.
В начале у бухгалтера спрашивают, сколько чисел тот хочет сложить, затем нужное
количество раз просят ввести число и в конце выводят получившуюся сумму.
*/

int main()
{
    int n;
    std::cout << "Enter number quantaty: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int number;
        std::cout << "Enter your number: ";
        std::cin >> number;
        sum += number;
    }

    std::cout << "Summ: " << sum << std::endl;

    return 0;
}