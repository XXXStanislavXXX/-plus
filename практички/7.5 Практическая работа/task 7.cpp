#include <iostream>

/*
Задание 7. Биолаборатория* (дополнительное задание)
Что нужно сделать
В борьбе со всемирной эпидемией коринебактерий исследователи компании
«Терран Биотех» открыли новый антибиотик. Напишите программу, помогающую
протестировать его.

В чашку Петри исследователи кладут N бактерий и добавляют X капель антибиотика.
Известно, что число коринебактерий в чашке Петри увеличивается в два раза
каждый час, а каждая капля антибиотика в первый час убивает 10 бактерий, во
второй час — 9 бактерий, в следующий — 8 и так далее, пока антибиотик не
перестанет действовать. Заметьте, что сначала число коринебактерий
увеличивается, а затем действует антибиотик. Пользователь вашей программы
вводит N и X, а программа печатает на экране, сколько бактерий останется в
чашке Петри в конце каждого часа, до тех пор, пока не закончатся бактерии или
антибиотик не перестанет действовать. Судьба человечества — в ваших руках.
Обеспечьте контроль ввода.
*/

int main()
{
    int bacteriaCount;
    std::cout << "Please enter how many bacteria do you have? : ", std::cin >> bacteriaCount;

    int antibioticDrops;
    std::cout << "Please enter how many antibiotic drops do you have? : ", std::cin >> antibioticDrops;

    while (bacteriaCount < 0 || antibioticDrops < 0)
    {
        std::cout << "Invalid input." << std::endl;
        std::cout << "Please enter how many bacteria do you have? : ", std::cin >> bacteriaCount;
        std::cout << "Please enter how many antibiotic drops do you have? : ", std::cin >> antibioticDrops;
    }
    int antibioticEffect = 10;
    int hour = 0;
    while (bacteriaCount > 0 && antibioticDrops > 0)
    {
        std::cout << "In " << hour << " hour(s) you will have " << bacteriaCount << " bacteria left." << std::endl;
        bacteriaCount *= 2;

        if (antibioticDrops > 0)
        {
            bacteriaCount -= antibioticEffect * antibioticDrops;
            if (bacteriaCount < 0)
            {
                bacteriaCount = 0;
            }
            antibioticDrops--;
            antibioticEffect--;
        }

        hour++;
    }
    std::cout << "In " << hour << " hour(s) you will have " << bacteriaCount << " bacteria left." << std::endl;
    std::cout << "Antibiotic drops left: " << antibioticDrops << std::endl;
    std::cout << "Antibiotic effect left: " << antibioticEffect << std::endl;
    return 0;

    /*
    Не уверен в правильности решения так как не уверен верно ли понял задание...
    */
}