#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

/*
Задача 4. Убийца Photoshop
Вы разрабатываете новый крутой графический редактор. Один из инструментов
редактора позволяет делать градиент — плавный переход между двумя точками 
разной яркости.
Яркость точки определяется целым числом от 0 до 255, где 0 — чёрный, 255 —
белый, а всё, что между ними — оттенки серого.

Напишите код для расчёта яркости точки градиента между двумя заданными точками.
Пользователь вводит яркость левой границы градиента, потом яркость правой
границы и параметр: число от 0 до 1, которое означает интересующую нас точку.
Например, если параметр равен 0.5, то искомая точка находится ровно посередине
между левой и правой границами, если параметр равен 0, то искомая точка
совпадает с левой границей, и, наконец, если параметр равен 1, то искомая точка
совпадает с правой границей. Программа должна вывести число — яркость искомой
точки. Обеспечьте контроль ввода.
*/

int main()
{
    int leftBrightness, rightBrightness;
    float parameter;

    std::cout << "Enter the brightness of the left boundary (0-255): ";
    std::cin >> leftBrightness;

    while (leftBrightness < 0 || leftBrightness > 255) {
        std::cout << "Invalid brightness. Try again: ";
        std::cin >> leftBrightness;
    }

    std::cout << "Enter the brightness of the right boundary (0-255): ";
    std::cin >> rightBrightness;
    while (rightBrightness < 0 || rightBrightness > 255) {
        std::cout << "Invalid brightness. Try again: ";
        std::cin >> rightBrightness;
    }

    std::cout << "Enter the parameter (0-1): ";
    std::cin >> parameter;
    
    while (parameter < 0 || parameter > 1) {
        std::cout << "Invalid parameter. Try again: ";
        std::cin >> parameter;
    }

    float result = leftBrightness + (rightBrightness - leftBrightness) * parameter;

    std::cout << "The brightness of the point is: " << result << std::endl;

    return 0;
}