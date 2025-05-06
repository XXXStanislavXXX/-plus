#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

/*
Задача 2. Автопилот
Одна из базовых частей программы автопилота пассажирских самолётов — контроль
угла тангажа. Угол тангажа — это угол между продольной осью самолёта и
горизонтом. Если тангаж положительный, нос самолёта смотрит вверх, если
отрицательный, нос смотрит вниз и самолёт пикирует. При больших и малых углах
тангажа можно потерять управление.

У самолёта SKB-1 допустимый угол тангажа лежит в пределах от -0,28 до 0,28
радиан. Вам поручено написать код, который проверяет, лежит ли введённый
пользователем угол в этих пределах. Пользователь вводит угол в градусах.
Используйте как можно меньше конструкций if. Обеспечьте контроль ввода.
*/

int main()
{

    bool isLanded = false;

    while (!isLanded)
    {
        float angle;
        std::cout << "Enter the angle in degrees: ", std::cin >> angle;

        while (angle < -180 || angle > 180)
        {
            std::cout << "Invalid angle. Try again: ", std::cin >> angle;
        }

        angle = angle * M_PI / 180;

        std::cout << "The angle in radians is: " << angle << std::endl;
        std::cout << "The angle in degrees is: " << angle * 180 / M_PI << std::endl;

        while (angle < -0.28 || angle > 0.28)
        {
            if (angle < -0.28)
            {
                std::cout << "The angle is too low. Go higher: ", std::cin >> angle;
                angle = angle * M_PI / 180;
                std::cout << "The angle in radians is: " << angle << std::endl;
                std::cout << "The angle in degrees is: " << angle * 180 / M_PI << std::endl;
            }
            else
            {
                std::cout << "The angle is too high. Go lower: ", std::cin >> angle;
                angle = angle * M_PI / 180;
                std::cout << "The angle in radians is: " << angle << std::endl;
                std::cout << "The angle in degrees is: " << angle * 180 / M_PI << std::endl;
            }
        }

        std::string answer;
        std::cout << "The angle is acceptable! Are you landed? (Yes\\NO)\n", std::cin >> answer;

        if (answer == "Yes" || answer == "yes" || answer == "YES")
        {
            isLanded = true;
        }
        else if (answer == "No" || answer == "no" || answer == "NO")
        {
            isLanded = false;
        }
        else
        {
            std::cout << "Invalid answer. Try again: ", std::cin >> answer;
        }
    }
}