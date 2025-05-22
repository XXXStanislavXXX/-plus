#include <iostream>
#include <string>

/*
1. Время в пути
Что нужно сделать
Поезд отправляется в AA часов BB минут и прибывает в пункт назначения в CC
часов DD минут. Сколько часов и минут он находится в пути?

Напишите программу, которая принимает от пользователя две строки — время
отправления и время прибытия поезда. Время задаётся строкой из пяти символов в
формате HH:MM. Обеспечьте контроль ввода, убедитесь также, что время корректно.

Программа должна ответить, сколько часов и минут поезд находится в пути. Если
время отправления больше времени прибытия, считайте, что поезд прибывает в
пункт назначения на следующий день.
*/

int main()
{
    std::string departureTime, arrivalTime;
    int depHour, depMinute, arrHour, arrMinute;

    std::cout << "Enter departure time (HH:MM): ", std::cin >> departureTime;

    std::cout << "Enter arrival time (HH:MM): ", std::cin >> arrivalTime;

    while (departureTime.length() != 5 || arrivalTime.length() != 5 ||
           departureTime[2] != ':' || arrivalTime[2] != ':' ||
           departureTime[0] < '0' || departureTime[0] > '9' ||
           departureTime[1] < '0' || departureTime[1] > '9' ||
           departureTime[3] < '0' || departureTime[3] > '9' ||
           departureTime[4] < '0' || departureTime[4] > '9' ||
           arrivalTime[0] < '0' || arrivalTime[0] > '9' ||
           arrivalTime[1] < '0' || arrivalTime[1] > '9' ||
           arrivalTime[3] < '0' || arrivalTime[3] > '9' ||
           arrivalTime[4] < '0' || arrivalTime[4] > '9')
    {
        std::cout << "Invalid time format. Please enter time in HH:MM format: ";
        std::cin >> departureTime >> arrivalTime;
    }

    depHour = (departureTime[0] - '0') * 10 + (departureTime[1] - '0');
    depMinute = (departureTime[3] - '0') * 10 + (departureTime[4] - '0');
    arrHour = (arrivalTime[0] - '0') * 10 + (arrivalTime[1] - '0');
    arrMinute = (arrivalTime[3] - '0') * 10 + (arrivalTime[4] - '0');

    while (depHour < 0 || depHour > 23 || depMinute < 0 || depMinute > 59 ||
           arrHour < 0 || arrHour > 23 || arrMinute < 0 || arrMinute > 59)
    {
        std::cout << "Invalid time. Please enter time in HH:MM format: ";
        std::cin >> departureTime >> arrivalTime;
    }

    int totalDepartureMinutes = depHour * 60 + depMinute;

    int totalArrivalMinutes = arrHour * 60 + arrMinute;

    if (totalDepartureMinutes > totalArrivalMinutes)
    {
        totalArrivalMinutes += 24 * 60;
    }

    int travelTimeMinutes = totalArrivalMinutes - totalDepartureMinutes;

    std::cout << "Travel time: " << travelTimeMinutes / 60 << " hours and "
              << travelTimeMinutes % 60 << " minutes.\n";
    return 0;
}