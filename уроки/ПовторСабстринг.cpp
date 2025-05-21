#include <iostream>
#include <string>

/*
Напишите программу, которая проверяет, верно ли, что данная строка представляет
из себя некоторую другую строку, повторённую несколько раз. Например, строка
dabudabudabu — это трижды повторённая строка dabu. Строка kapkap — это дважды
повторённая строка kap. А вот строку abdabdab или строку gogolmogol нельзя
представить как повторение некоторой другой строки.

На вход программа должна принимать строку и выдавать ответ Yes, если строка
является повторением некоторой другой строки, и No, если это не так.
*/

int main()
{
    std::string str;
    std::cout << "Enter string: ";
    std::cin >> str;

    int n = str.length();
    bool isRepeated = false;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            std::string substring = str.substr(0, i);
            std::string repeatedSubstring;

            for (int j = 0; j < n / i; j++)
            {
                repeatedSubstring += substring;
            }

            if (repeatedSubstring == str)
            {
                isRepeated = true;
                break;
            }
        }
    }

    if (isRepeated)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}