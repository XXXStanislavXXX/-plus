#include <iostream>
#include <string>

/*
Напишите программу, которая принимает от пользователя текст
(то есть некоторую строку) и ещё слово (то есть ещё строку) и подсчитывает,
сколько раз слово встречается в тексте. Более точно: сколько в данном тексте
существует позиций, начиная с которых можно прочитать данное слово.
*/

int main()
{
    std::string text;
    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    std::string word;
    std::cout << "Enter word: ", std::cin >> word;

    int count = 0;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == word[0])
        {
            bool found = true;
            for (int j = 1; j < word.length() && found; j++)
            {
                if (text[i + j] != word[j] && found)
                {
                    found = false;
                }
            }
            if (found)
            {
                count++;
            }
        }
    }
    std::cout << "The word '" << word << "' appears " << count << " times in the text." << std::endl;
}