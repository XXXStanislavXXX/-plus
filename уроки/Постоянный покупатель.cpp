#include <iostream>

/*
Задача 3. Постоянный покупатель
Иногда к Араику Вачагановичу приходят постоянные покупатели, для которых он
делает скидку. Для каждого такого клиента скидка своя. Модифицируйте программу
из задачи «Орехи»: Араик будет вводить цену товара за 100 грамм, вес покупки и
размер скидки в процентах, а программа должна выводить итоговую стоимость.
*/

int main()
{
    float price, weight, discount;
    std::cout << "Enter the price for 100 grams, weight and discount: ", std::cin >> price >> weight >> discount;

    while (price < 0 || weight < 0 || discount > 100)
    {
        std::cout << "Invalid input. Please enter positive values for price, weight and discount (0-100): ";
        std::cin >> price >> weight >> discount;
    }

    float discountAmount = price * discount / 100;
    price -= discountAmount;
    float total = price * weight / 100;

    std::cout << "Total price: " << total << " DISCOUNT IS: " << discount << std::endl;
    return 0;
}