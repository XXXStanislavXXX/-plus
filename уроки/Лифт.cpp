#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

/*
Задача 3. Лифт
В Объединённых Арабских Эмиратах находится самый высокий небоскрёб Земли —
Burj Khalifa. Он оборудован скоростными пассажирскими лифтами, но вот беда:
иногда они дают сбой и застревают между этажами. В этом случае известно число
H — высота пола остановившейся кабины лифта над уровнем земли. Чтобы команда
лифтёров знала, куда ей ехать, шейх поручил вам написать программу, которая по
известному H определяет, на каком этаже находится большая часть кабины.
Известно, что расстояние между этажами Burj Khalifa равно 3,975 м, а этаж на
уровне земли имеет номер 1. На ввод программа принимает вещественное число H,
на экран выводит целое число — номер этажа. Не используйте при решении условный
оператор, кроме как для обеспечения контроля ввода.
*/

int main()
{
    float H;
    std::cout << "Enter the height of the elevator cabin (in meters): ", std::cin >> H;

    while(H < 0)
    {
        std::cout << "Height cannot be negative. Please enter a valid height: ", std::cin >> H;
    }

    float floorHeight = 3.975f;

    int floorNumber = round(H / floorHeight)+1;

    std::cout << "The elevator cabin is on floor: " << floorNumber << std::endl;

    return 0;
}