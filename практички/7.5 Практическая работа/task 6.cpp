#include <iostream>

/*
Задание 6. Важные объявления
Что нужно сделать
Напишите программу для печати важных объявлений. Сверху объявления должен
располагаться вот такой колонтитул:


Восклицательные знаки всегда располагаются по центру строки, причём в
зависимости от важности объявления количество восклицательных знаков может
быть разным. Напишите программу, которая спрашивает у пользователя сначала
общую длину колонтитула в символах, потом желаемое количество восклицательных
знаков, после чего выводит на экран готовую строку. Обеспечьте контроль ввода.
*/

int main()
{
    int length;
    std::cout << "Please enter the length of the header: ", std::cin >> length;

    int exclamationCount;
    std::cout << "Please enter the number of exclamations: ", std::cin >> exclamationCount;

    while (length < 0 || exclamationCount < 0)
    {
        std::cout << "Invalid input." << std::endl;
        std::cout << "Please enter the length of the header: ", std::cin >> length;
        std::cout << "Please enter the number of exclamations: ", std::cin >> exclamationCount;
    }

    while (length < exclamationCount)
    {
        std::cout << "Length is less than number of exclamations." << std::endl;
        std::cout << "Please enter the length of the header: ", std::cin >> length;
        std::cout << "Please enter the number of exclamations: ", std::cin >> exclamationCount;
    }

    int spaces = (length - exclamationCount) / 2;

    for (int i = 0; i < spaces; i++)
    {
        std::cout << "~";
    }

    for (int i = 0; i < exclamationCount; i++)
    {
        std::cout << "!";
    }

    for (int i = 0; i < spaces; i++)
    {
        std::cout << "~";
    }

    std::cout << std::endl;

    return 0;
}