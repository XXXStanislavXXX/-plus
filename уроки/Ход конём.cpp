#include <iostream>
#include <cmath>

/*
Задача 1. Ход конём
В рамках разработки шахматного искусственного интеллекта стоит новая задача.
По заданным вещественным координатам коня и второй точки программа должна
определить, может ли конь ходить в эту точку. Используйте как можно меньше
конструкций if и логических операторов. Обеспечьте контроль ввода.
*/

int main()
{
    float x, y;
    std::cout << "Enter x and y coordinates of the knight: ", std::cin >> x >> y;

    while (x < 0 || x > 7 || y < 0 || y > 7) {
        std::cout << "Invalid coordinates. Try again: ", std::cin >> x >> y;
    }

    float x2, y2;
    std::cout << "Enter x and y coordinates of the target point: ", std::cin >> x2 >> y2;

    while (x2 < 0 || x2 > 7 || y2 < 0 || y2 > 7) {
        std::cout << "Invalid coordinates. Try again: ", std::cin >> x2 >> y2;
    }

    if (std::abs(x - x2) == 1 && std::abs(y - y2) == 2 || std::abs(x - x2) == 2 && std::abs(y - y2) == 1) {
        std::cout << "The knight can move to the target point." << std::endl;
    } else {
        std::cout << "The knight cannot move to the target point." << std::endl;
    }

    return 0;
}