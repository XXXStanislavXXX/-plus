#include <iostream>

/*
Задание 8. Ёлочка* (дополнительное задание)
Что нужно сделать
Напишите программу, которая выводит на экран равнобедренный треугольник,
заполненный символами решётки «#». Пусть высота треугольника вводится
пользователем. Обеспечьте контроль ввода.
*/

int main()
{
    int height;
    std::cout << "Please enter the height of the triangle: ", std::cin >> height;

    while (height < 0)
    {
        std::cout << "Invalid input." << std::endl;
        std::cout << "Please enter the height of the triangle: ", std::cin >> height;
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            std::cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            std::cout << "#";
        }

        std::cout << std::endl;
    }

    return 0;
}