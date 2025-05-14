#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

/*
Задание 1. Космический симулятор
Что нужно сделать
Вы пишете симулятор космических полётов. Ваш звездолёт массой m килограмм
включает двигатель с силой тяги F ньютонов на t секунд. Напишите программу,
которая по заданным F, m и t покажет, на каком расстоянии от первоначального
положения окажется космический корабль через t секунд. Обеспечьте контроль
ввода.

Примечание: космический корабль находится в открытом космосе.

Напоминаем, что расстояние можно рассчитать по формуле:


*/

int main()
{
    float F, m, t;
    std::cout << "Enter the thrust force (F) in Newtons: ", std::cin >> F;

    std::cout << "Enter the mass (m) in kilograms: ", std::cin >> m;

    std::cout << "Enter the time (t) in seconds: ", std::cin >> t;

    while (F <= 0 || m <= 0 || t <= 0) {
        std::cout << "Invalid input. Please enter positive values for F, m, and t." << std::endl;
        std::cout << "Enter the thrust force (F) in Newtons: ", std::cin >> F;
        std::cout << "Enter the mass (m) in kilograms: ", std::cin >> m;
        std::cout << "Enter the time (t) in seconds: ", std::cin >> t;
    }

    float acceleration = F / m;

    float distance = 0.5 * acceleration * std::pow(t, 2);

    std::cout << "The distance traveled by the spaceship is: " << distance << " meters." << std::endl;

    return 0;
}