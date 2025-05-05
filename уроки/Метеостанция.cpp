#include <iostream>

/*
Задача 3. Метеостанция
Для удобства работы сотрудников международной метеостанции каждый день нужно
распечатывать различные таблицы соответствия градусов по шкалам Цельсия и
Фаренгейта. Напишите программу, которая принимает на вход три целых числа в
градусах Цельсия: нижняя граница температуры, верхняя граница температуры и
шаг. Программа выводит на экран таблицу соответствия градусов Цельсия градусам
Фаренгейта от нижней до верхней границы с указанным шагом. Обеспечьте контроль
ввода. Верхняя граница должна печататься, даже если последний шаг «перепрыгнул»
её. Известно, что 0 °С соответствует 32 °F, а каждый градус Цельсия
эквивалентен 1,8 градусам Фаренгейта.
*/

int main()
{
    int lower_bound, upper_bound, step;
    std::cout << "Enter lower, upper bound and step: ", std::cin >> lower_bound >> upper_bound >> step;

    while (lower_bound > upper_bound || step <= 0)
    {
        std::cout << "Invalid input. Please enter lower bound < upper bound and step > 0." << std::endl;
        std::cout << "Enter lower, upper bound and step: ", std::cin >> lower_bound >> upper_bound >> step;
    }

    std::cout << "Celsius\tFahrenheit" << std::endl;

    for (int i = lower_bound; i <= upper_bound; i += step)
    {
        float fahrenheit = (i * 1.8) + 32;
        std::cout << i << "\t" << fahrenheit << std::endl;
    }

    return 0;
}