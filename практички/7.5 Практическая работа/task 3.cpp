#include <iostream>

/*
Задание 3. Красный Марс
Что нужно сделать
В «Спейс Инжиниринг» были впечатлены тем, как вы справились с кофемашиной и
решили отдать вам на аутсорс разработку программы для нового робота-разведчика
поверхности Марса. Это первый прототип, поэтому он тестируется в прямоугольном
помещении размером 15 на 20 метров. Марсоход высаживается в центре комнаты,
после чего управление им передаётся оператору — пользователю вашей программы.
Программа спрашивает, в какую сторону оператор хочет направить робота: север
(клавиша W), юг (клавиша S), запад (клавиша A) или восток (клавиша D). Оператор
делает выбор, марсоход перемещается на 1 метр в эту сторону и программа
сообщает новую позицию марсохода. Если марсоход упёрся в стену, то он не должен
пытаться перемещаться в сторону стены, в этом случае его позиция не меняется.
*/

int main()
{
    int x = 15;

    int y = 20;

    int xPos = 7;

    int yPos = 10;

    for (;;)
    {
        std::string direction;
        std::cout << "Please enter the direction (W/A/S/D) or enter 'STOP' : ", std::cin >> direction;

        if (direction == "W")
        {

            if (yPos < y)
            {
                yPos++;
                std::cout << "New position is: (" << xPos << ", " << yPos << ")" << std::endl;
            }

            else
            {
                std::cout << "You can't go that way!" << std::endl;
            }
        }

        else if (direction == "A")
        {

            if (xPos > 0)
            {
                xPos--;
                std::cout << "New position is: (" << xPos << ", " << yPos << ")" << std::endl;
            }

            else
            {
                std::cout << "You can't go that way!" << std::endl;
            }
        }

        else if (direction == "S")
        {

            if (yPos > 0)
            {
                yPos--;
                std::cout << "New position is: (" << xPos << ", " << yPos << ")" << std::endl;
            }

            else
            {
                std::cout << "You can't go that way!" << std::endl;
            }
        }

        else if (direction == "D")
        {

            if (xPos < x)
            {
                xPos++;
                std::cout << "New position is: (" << xPos << ", " << yPos << ")" << std::endl;
            }

            else
            {
                std::cout << "You can't go that way!" << std::endl;
            }
        }

        else if (direction == "STOP")
        {
            std::cout << "You stopped the program." << std::endl;
            std::cout << "Final position is: (" << xPos << ", " << yPos << ")" << std::endl;
            break;
        }

        else
        {
            std::cout << "Invalid direction!" << std::endl;
        }
        std::cout << "Final position is: (" << xPos << ", " << yPos << ")" << std::endl;
    }
    
    return 0;
}