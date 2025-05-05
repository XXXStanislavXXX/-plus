#include <iostream>

/*
Задача 4. Аккуратность
Робот из задачи «Компьютерное зрение» верно определяет клетку, на которой стоят
фигуры. Но соперник-человек может поставить фигуру не по центру клетки, а со
смещением. Если во время игры такое смещение станет велико, робот не поймёт, в
какой клетке стоит фигура. Чтобы избежать этого, робот должен поправлять фигуры
на доске, выставляя их по центру клетки. Модифицируйте программу «Компьютерное
зрение», чтобы она выдавала не только номера клетки с фигурой, но и две
вещественные поправки: показывала, как передвинуть фигуру по горизонтали и
вертикали, чтобы она встала по центру своей клетки. Обеспечьте контроль ввода.
*/

int main()
{
    float x,y;
    std::cout << "Enter figure location: ", std::cin >> x >> y;

    while (x < 0 || x > 0.8 || y < 0 || y > 0.8)
    {
        std::cout << "Invalid input. Please enter coordinates between 0 and 0.8." << std::endl;
        std::cout << "Enter figure location: ", std::cin >> x >> y;
    }

    int xCoordinate =  x*100;
    int yCoordinate =  y*100;
    
    if (xCoordinate % 10 > 5)
    {
        xCoordinate = (xCoordinate / 10) + 1;
    }
    else
    {
        xCoordinate = xCoordinate / 10;
    }
    if (yCoordinate % 10 > 5)
    {
        yCoordinate = (yCoordinate / 10) + 1;
    }
    else
    {
        yCoordinate = yCoordinate / 10;
    }

    std::cout << "Cell coordinates are: " << xCoordinate << " " << yCoordinate << std::endl;
    std::cout << "Move figure by: " << (xCoordinate * 10 - x * 100) / 10 << " " << (yCoordinate * 10 - y * 100) / 10 << std::endl;

    return 0;
}