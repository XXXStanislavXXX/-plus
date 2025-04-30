#include <iostream>

/*
Задача 2. Кадастровые проблемы (цикл for).
Перепишите программу из прошлого модуля, только теперь вместо цикла while
используйте цикл for. В столице программистов на квадратные участки дается
скидка. А так как работать с целыми числами программисты начинают раньше,
то и участки, площадь которых является точным квадратом (например, 25 или 49),
являются самыми востребованными. Напишите программу, которая проверяет,
является ли введенная площадь участка точным квадратом. Самый большой участок в
городе имеет площадь в 1 000 000 м2.
*/

int main()
{
    int area;
    std::cout << "Enter your regions area: ";
    std::cin >> area;

    for (; area > 1000000 || area < 0;)
    {
        std::cout << "Your regions area is incorrect. Please enter a number between 0 and 1,000,000: ";
        std::cin >> area;
    }

    bool isSquare = false;
    for (int i = 1; i * i <= area; ++i)
    {
        if (i * i == area)
        {
            isSquare = true;
            break;
        }
    }

    if (isSquare)
    {
        std::cout << "Your regions area is certain square" << std::endl;
    }
    else
    {
        std::cout << "Your regions area is not a certain square" << std::endl;
    }

    return 0;
}