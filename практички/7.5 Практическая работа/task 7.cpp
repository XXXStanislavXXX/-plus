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

    for (int time = 1; time <= 10; time++)
    {
        if (bacteriaCount <= 0)
        {
            std::cout << "Invalid bacterial count!" << std::endl;
            std::cout << "Please enter how many bacteria do you have? : ", std::cin >> bacteriaCount;
        }

        if (antibioticDrops <= 0)
        {
            std::cout << "INvalid antibiotic count!" << std::endl;
            std::cout << "Please enter how many antibiotic drops do you have? : ", std::cin >> antibioticDrops;
        }

        bacteriaCount *= 2;
        bacteriaCount -= (11 - time) * antibioticDrops;

        std::cout << "After " << time << " hour(s) there are " << bacteriaCount << " bacteria left." << std::endl;
    }
    
    std::cout << "The experiment is over!" << std::endl;
}