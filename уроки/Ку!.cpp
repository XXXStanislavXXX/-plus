#include <iostream>

/*
Задача 1. Ку!
Общеизвестно, что на планете Плюк можно купить гравицапу за пол-КЦ или, что то
же самое, 2 200 чатлов. Причем чатлы неделимы и всегда являются целым числом.
Напишите простую программу-конвертер валют. В программу вводится количество
чатлов, а она сообщает, сколько это КЦ и сколько гравицап можно купить на эту
сумму. Обеспечьте контроль ввода.
*/

int main()
{
    int chatl;
    std::cout << "Enter chatl ammount: ", std::cin >> chatl;

    while (chatl <= 0)
    {
        std::cout << "Chatl ammount must be positive. Try again: ", std::cin >> chatl;
    }

    float gravitsapa = chatl / 2200.0f;

    float Kts = gravitsapa / 2.0f;

    std::cout << "You can buy " << gravitsapa << " gravitsapas or " << Kts << " Kts" << " for " << chatl << " chatles" << std::endl;
}