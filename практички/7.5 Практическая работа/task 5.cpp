#include <iostream>

/*
Задание 5. Координатные оси
Задание 5. Координатные оси
Что нужно сделать
Модифицируйте пример с координатными осями так, чтобы в точке их пересечения
рисовался знак «+», на верхнем конце вертикальной оси была стрелка вверх «^», а
на правом конце горизонтальной оси — стрелка вправо «>». Это сделает рисунок
более красивым и точным.
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

            if (i == height / 2)
            {
                if (j == width / 2)
                {
                    std::cout << "+";
                }
                else if (j == width - 1)
                {
                    std::cout << ">";
                }
                else
                {
                    std::cout << "-";
                }
            }

            else
            {

                if (j == width / 2)
                {
                    if (i == 0)
                    {
                        std::cout << "^";
                    }
                    else
                    {
                        std::cout << "|";
                    }
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