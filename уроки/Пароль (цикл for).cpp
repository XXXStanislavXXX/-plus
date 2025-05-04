#include <iostream>

/*
Задача 1. Пароль (цикл for).
Перепишите программу из прошлого модуля, только теперь вместо цикла while
используйте цикл for. Программа просит пользователя ввести пароль. Если пароль
неверный, программа просит сделать это снова, и так до тех пор, пока
пользователь не введёт правильный пароль.
*/

int main()
{
    std::string correctPassword;
    std::cout << "Enter correct password: ", std::cin >> correctPassword;

    std::string password;
    std::cout << "Enter password: ", std::cin >> password;

    for (int i = 0; password != correctPassword; i++)
    {
        std::cout << "Password denied, try again: ", std::cin >>password;
    }

    std::cout << "Password granted." << std::endl;
    return 0;
}