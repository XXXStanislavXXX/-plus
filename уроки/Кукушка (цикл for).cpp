#include <iostream>

/*
Задача 1. Кукушка (цикл for).
Перепишите программу из прошлого модуля, используя цикл for. Напишите программу,
которая имитировала бы часы с кукушкой. В начале работы она спрашивает, который
час, а затем нужное количество раз пишет “Ку-ку!”. Обеспечьте контроль ввода
(например, количество часов не может быть отрицательным).
*/

int main()
{
    int hour;
    std::cout << "Enter hour: ";
    std::cin >> hour;
    while (hour <= 0 || hour > 12)
    {
        std::cout << "Enter correct hour: ";
        std::cin >> hour;
    }
    for (int i = 0; i < hour; i++)
    {
        std::cout << i << " Ku - Ku!" << std::endl;
    }
    
}