#include <iostream>
#include <string>

/*
3. Подсчёт количества слов
Что нужно сделать
Напишите программу, которая считает количество слов в тексте, введённом
пользователем. Словом считается любая последовательность символов
(не обязательно букв) без пробелов.

Пользователь вводит строку, состоящую из произвольных символов и пробелов.
Программа должна вывести одно число — количество слов во введённой строке.
*/

int main()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int wordCount = 0;
    bool inWord = false;

    for (char c : input)
    {
        if (c == ' ')
        {
            if (inWord)
            {
                inWord = false;
            }
        }
        else
        {
            if (!inWord)
            {
                wordCount++;
                inWord = true;
            }
        }
    }

    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}