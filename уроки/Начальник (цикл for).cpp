#include <iostream>

/*
Задача 5. Начальник (цикл for).
Перепишите программу из прошлого модуля, используя цикл for.
Напишите программу для робота-начальника. Он спрашивает у пользователя,
выполнил ли он задание, которое тот выдавал вчера, и продолжает это делать до
тех пор, пока пользователь не ответит ему “Да, конечно, сделал”. Для большей
реалистичности в конце пусть робот-начальник пожалуется: “Ну почему тебя нужно
спрашивать N раз?”, где N — это число попыток, которые были потрачены
пользователем, прежде чем он ввёл правильный ответ.
*/

int main()
{
    std::string answer;
    bool isDone = false;

    for (int attempts = 0; !isDone; attempts++)
    {
        std::cout << "Did you do the task I gave you yesterday? (Yes/No)" << std::endl;
        std::cin >> answer;

        if (answer == "Yes " || answer == "yes" || answer == "YES" ||
            answer == "Yes, of course" || answer == "yes, of course" || answer == "YES, OF COURSE")
        {
            std::cout << "Well done!" << std::endl;
            std::cout << "Why should i ask you " << attempts << " times?" << std::endl;
            isDone = !isDone;
        }
        else
        {
            std::cout << "You are a bad employee!" << std::endl;
        }
    }

    return 0;
}