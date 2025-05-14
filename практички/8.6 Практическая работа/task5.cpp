#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

/*
Задание 5. Кенийский бегун
Что нужно сделать
Самуэль родился в Кении, и когда он немного подрос, то решил сделать карьеру
профессионального бегуна. Во время тренировок на стадионе он стал запоминать
свой темп на каждом километре с помощью простых наручных часов с секундной
стрелкой. После тренировки он хотел бы узнать свой средний темп бега, но не
может этого сделать: в Кении дети, решившие стать бегунами, обычно не ходят в
школу. Помогите Самуэлю.

Напишите программу для расчёта среднего темпа бега. Темп измеряется в секундах
на километр и означает количество времени, которое бегун потратит на
преодоление одного километра. Программа должна получить на вход количество
километров, покрытое за тренировку, и темп в секундах на каждый из этих
километров. На выходе программа выводит на экран средний темп в минутах и
секундах за всю тренировку. Обеспечьте контроль ввода.
*/

int main()
{
    float numKilometers;
    std::cout << "Enter the number of kilometers: ", std::cin >> numKilometers;

    while (numKilometers <= 0)
    {
        std::cout << "Invalid number of kilometers. Please enter a positive number." << std::endl;
        std::cin >> numKilometers;
    }

    float totalSeconds = 0.0f;

    for (int i = 1; i <= numKilometers; i++)
    {
        float pace;
        std::cout << "Enter the pace for kilometer " << i << " in seconds: ", std::cin >> pace;

        while (pace <= 0)
        {
            std::cout << "Invalid pace. Please enter a positive number." << std::endl;
            std::cin >> pace;
        }

        totalSeconds += pace;
    }

    float averagePace = totalSeconds / numKilometers;

    float seconds = std:: round(averagePace) - (std::floor(averagePace / 60) * 60);
    int minutes = averagePace / 60;

    std::cout << "Average pace: " << minutes << " minutes and " << seconds << " seconds per kilometer." << std::endl;

    return 0;
}