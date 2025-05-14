#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
#include <windows.h> // Donno how to force c++ to wait 1 second otherway

/*
Задание 4. Убийца Steam
Что нужно сделать
Вы пишете программу-инсталлятор для компьютерной игры. Пока обновление
скачивается, пользователю нужно показать прогресс загрузки, чтобы он мог
решить, подождать ему у экрана компьютера или заварить чай.

Напишите программу, принимающую на вход размер файла обновления в мегабайтах и
скорость интернет-соединения в мегабайтах в секунду. В каждую секунду программа
показывает, сколько процентов от общего объёма обновления уже скачано, до тех
пор, пока файл не загрузится. После установки обновления программа выводит
время в секундах, которое заняло скачивание. Обеспечьте контроль ввода.
*/

int main()
{
    float fileSize, downloadSpeed;
    std::cout << "Enter the file size in MB: ", std::cin >> fileSize;

    while (fileSize <= 0)
    {
        std::cout << "Invalid file size. Please enter a positive number." << std::endl;
        std::cin >> fileSize;
    }

    std::cout << "Enter the download speed in MB/s: ", std::cin >> downloadSpeed;

    while (downloadSpeed <= 0)
    {
        std::cout << "Invalid download speed. Please enter a positive number." << std::endl;
        std::cin >> downloadSpeed;
    }

    float downloadTime = fileSize / downloadSpeed;

    for (int i = 0; i <= downloadTime; i++)
    {
        std::cout << "Estimated: " << i << " seconds" << " downloaded: "
                  << (i / downloadTime) * 100 << "%" << " left: "
                  << (1 - (i / downloadTime)) * 100 << "%" << std::endl;
        Sleep(1000); // Donno how to force c++ to wait 1 second otherway
    }

    std::cout << "Download completed in " << downloadTime << " seconds." << std::endl;

    return 0;
}