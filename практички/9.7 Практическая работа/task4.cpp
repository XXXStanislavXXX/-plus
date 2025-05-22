#include <iostream>
#include <string>

/*
4. «Быки и коровы» (дополнительное задание)
Что нужно сделать
В логической игре «Быки и коровы» первый игрок загадывает четырёхзначное число
(оно может начинаться и с нулей), а второй игрок должен его отгадать.

Отгадывание происходит так: второй игрок называет любое четырёхзначное число, а
первый ему отвечает, сколько в этом числе «быков» и сколько «коров».

«Корова» — это цифра, которая совпадает по значению с какой-то из цифр
задуманного числа, но не стоит на нужном месте. «Бык» — это цифра, совпадающая
с цифрой в задуманном числе и по значению, и по расположению.

Напишите программу, которая по загаданному числу и по названному вторым игроком
числу определяет, сколько во втором числе «быков» и сколько «коров». Не
забудьте, что числа могут начинаться с нулей!
*/

int main()
{
    std::string secret, guess;
    std::cout << "Enter the secret number: ";
    std::getline(std::cin, secret);
    std::cout << "Enter your guess: ";
    std::getline(std::cin, guess);

    while (secret.length() != 4 || guess.length() != 4)
    {
        std::cout << "Invalid input. Please enter a four-digit number." << std::endl;
        std::cout << "Enter the secret number: ";
        std::getline(std::cin, secret);
        std::cout << "Enter your guess: ";
        std::getline(std::cin, guess);
    }

    int bulls = 0, cows = 0;
    for (int i = 0; i < 4; ++i)
    {
        if (guess[i] == secret[i])
        {
            bulls++;
        }
        else if (secret.find(guess[i]) != std::string::npos)
        {
            cows++;
        }
    }

    std::cout << bulls << " bulls and " << cows << " cows." << std::endl;

    return 0;
}