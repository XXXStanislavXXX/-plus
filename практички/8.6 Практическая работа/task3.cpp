#include <iostream>
#include <cmath>

/*
Задание 3. Игрушечная история
Что нужно сделать
Вы решили открыть бизнес по производству игровых деревянных кубиков для детей.
Вы узнали, что лучше всего продаются кубики со стороной 5 см в наборах по
несколько штук, причём кубиков в наборе должно быть достаточно, чтобы сложить
из них один большой куб. Для изготовления кубиков к вам в мастерскую поступают
деревянные бруски в форме прямоугольных параллелепипедов любых размеров.

Для оптимизации бизнес-процессов напишите программу, которая по заданным
размерам исходного бруска определяет, сколько кубиков из него можно изготовить,
можно ли из них составить набор для продажи и если можно, то максимальное число
кубиков в этом наборе. Все кубики должны быть из цельного дерева без
использования клея. Размеры бруска — вещественные числа. Обеспечьте контроль
ввода.

Например:

Из бруска 20x35x5 можно изготовить 28 кубиков.


Из 28 кубиков можно собрать набор из 27 кубиков.
*/

int main()
{
    float blockLength, blockWidth, blockHeight;
    std::cout << "Enter the dimensions of the block (length, width, height) in cm: ";
    std::cin >> blockLength >> blockWidth >> blockHeight;

    while (blockLength <= 0 || blockWidth <= 0 || blockHeight <= 0)
    {
        std::cout << "Invalid dimensions. Please enter positive values." << std::endl;
        std::cout << "Enter the dimensions of the block (length, width, height) in cm: ";
        std::cin >> blockLength >> blockWidth >> blockHeight;
    }

    float cubeSide = 5.0f;

    int cubesInLenght = blockLength / cubeSide;
    int cubesInWidth = blockWidth / cubeSide;
    int cubesInHeight = blockHeight / cubeSide;

    while (cubesInLenght <= 0 || cubesInWidth <= 0 || cubesInHeight <= 0)
    {
        std::cout << "Invalid dimensions. Please enter positive values." << std::endl;
        std::cout << "Enter the dimensions of the block (length, width, height) in cm: ";
        std::cin >> blockLength >> blockWidth >> blockHeight;
    }

    int cubesQuantity = cubesInLenght * cubesInWidth * cubesInHeight;
    std::cout << "You can make " << cubesQuantity << " cubes from the block." << std::endl;

    int cubesInSet = 0;

    for (int i = 1; i <= cubesQuantity; i++)
    {

        if (i * i * i <= cubesQuantity)
        {
            cubesInSet = i;
        }

    }
    if (cubesInSet > 0)
    {
        std::cout << "You can create a set of " << cubesInSet * cubesInSet * cubesInSet << " cubes." << std::endl;
    }

    else
    {
        std::cout << "You cannot create a set of cubes." << std::endl;
    }

    return 0;
}