#include <iostream>

/*
Задание 1. Запасы продовольствия
Что нужно сделать
Ваш космический корабль потерпел крушение на пустынной планете. Еда здесь не
растёт, но вы спасли из-под обломков 100-килограммовый мешок гречки. Из
прошлого опыта вы знаете, что если будете экономно питаться, то у вас будет
уходить по четыре килограмма гречки в месяц. Чтобы прикинуть гречневый бюджет,
вы решили написать программу, которая выведет информацию о том, сколько
килограммов гречки у вас должно быть в запасе через месяц, два и так далее,
пока она не закончится.
*/

int main()
{
    int foodAmount;
    std::cout << "Please enter how many food do you have? : ", std::cin >> foodAmount;

    int foodPerMonth;
    std::cout << "Please enter how many food do you eat per month? : ", std::cin >> foodPerMonth;

    for (int i = 0; foodAmount > 0; i++)
    {
        std::cout << "In " << i << " month(s) you will have " << foodAmount << " kg of food left." << std::endl;
        foodAmount -= foodPerMonth;
    }
    std::cout << "You have no food left." << std::endl;

    return 0;
}