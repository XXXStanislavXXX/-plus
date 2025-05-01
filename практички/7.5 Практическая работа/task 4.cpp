#include <iostream>

/*
Задание 4. Рамка
Что нужно сделать
Напишите программу, которая рисует с помощью символьной графики прямоугольную
рамку. Для вертикальных линий используйте символ вертикального штриха «|», а
для горизонтальных — дефис «-». Пусть пользователь вводит ширину и высоту рамки.
*/

int main()
{
    int width;
    std::cout << "Please enter the width of the frame: ", std::cin >> width;

    int height;
    std::cout << "Please enter the height of the frame: ", std::cin >> height;

    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j < width; j++)
        {

            if (i == 0 || i == height - 1)
            {
                std::cout << "-";
            }

            else
            {

                if (j == 0 || j == width - 1)
                {
                    std::cout << "|";
                }

                else
                {
                    std::cout << " ";
                }
            }
        }

        std::cout << std::endl;
    }

    return 0;
}