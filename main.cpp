#include <iostream>

/*
Задача 3. Крепкий орешек.
Мы разрабатываем пошаговую игру по мотивам боевика. Игрок — главный герой и
должен обезвредить бомбу, которая взорвётся через 10 итераций цикла.
Программа спрашивает пользователя хочет ли он перерезать провод сейчас.
Если ответ “нет”, то счетчик бомбы уменьшается. Если он достиг нуля, то
программа выдаёт сообщение “Бомба взорвалась”, а если не достиг, то программа
вновь переспрашивает, не хочет ли игрок обезвредить бомбу, и сообщает, сколько
времени осталось до взрыва. Если ответ “да”, то программа выводит на экран
сообщение о том, что бомба обезврежена и сколько шагов оставалось до взрыва.
Используйте цикл for.
*/

int main()
{
    int time = 10;
    std::string answer;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Do you want to cut a wire? (yes/no) : ";
        std::cin >> answer;

        if (answer == "yes")
        {
            std::cout << "Bomb is disarmed! Time before explode: " << time - i << std::endl;
            return 0;
        }
        else if (answer == "no")
        {
            --time;
            if (time == 0)
            {
                std::cout << "Yore DEAD!" << std::endl;
                return 0;
            }
            else
            {
                std::cout << "Time till explode: " << time << std::endl;
            }
        }
        else
        {
            std::cout << "invalid answer! Please enter 'yes' or 'no'." << std::endl;
        }
    }

    return 0;
}