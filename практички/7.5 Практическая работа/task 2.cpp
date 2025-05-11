#include <iostream>

/*
Задание 2. Кофемашина
Что нужно сделать
Инженеры компании «Спейс Инжиниринг» не могут продуктивно работать без кофе.
Недавно в их кофемашину случайно попал космический луч и повредил
программу-прошивку. Вас умоляют помочь. Кофемашина умеет готовить два напитка:
американо и латте. Для американо требуется 300 мл воды, а для латте 30 мл воды
и 270 мл молока.

Напишите программу, которая спрашивает у пользователя (это действие программа
делает один раз в начале работы), сколько всего миллилитров молока и воды
залито в кофемашину, после чего начинает обслуживание, спрашивая, какой напиток
хочет очередной посетитель. Пользователь выбирает один из двух напитков,
программа отвечает одним из трёх вариантов: «Ваш напиток готов», «Не хватает
воды» или «Не хватает молока», после чего переходит к обслуживанию следующего
посетителя. Если молока и воды не хватает ни на один вид напитка, программа
выдаёт отчёт и завершается. В отчёте должно быть написано, что ингредиенты
подошли к концу, должен быть указан остаток воды и молока в машине, а также
должно быть указано, сколько всего было приготовлено чашек американо и латте за
эту смену. Выберите наиболее удобный для написания программы цикл.
Обеспечьте контроль ввода.
*/

int main()
{
    int waterAmount;
    std::cout << "Please enter how many water do you have? : ", std::cin >> waterAmount;

    int milkAmount;
    std::cout << "Please enter how many milk do you have? : ", std::cin >> milkAmount;

    int americanoCount = 0;
    int latteCount = 0;

    while (true)
    {
        std::string drink;
        std::cout << "Please enter what drink do you want? (americano/latte) : ", std::cin >> drink;

        if (drink == "americano")
        {

            if (waterAmount >= 300)
            {
                waterAmount -= 300;
                americanoCount++;
                std::cout << "Your americano is ready." << std::endl;
            }

            else
            {
                std::cout << "Not enough water for americano, latte maybe?" << std::endl;
            }
        }

        else if (drink == "latte")
        {

            if (waterAmount >= 30 && milkAmount >= 270)
            {
                waterAmount -= 30;
                milkAmount -= 270;
                latteCount++;
                std::cout << "Your latte is ready." << std::endl;
            }

            else if (waterAmount < 30)
            {
                std::cout << "Not enough water for latte, americano maybe?" << std::endl;
            }

            else
            {
                std::cout << "Not enough milk for latte." << std::endl;
            }
        }

        else
        {
            std::cout << "Invalid drink choice." << std::endl;
        }

        if (waterAmount < 300 || (milkAmount < 270 && waterAmount < 30))
        {
            std::cout << "Ingredients are finished." << std::endl;
            std::cout << "Water left: " << waterAmount << " ml" << std::endl;
            std::cout << "Milk left: " << milkAmount << " ml" << std::endl;
            std::cout << "Americano cups made: " << americanoCount << std::endl;
            std::cout << "Latte cups made: " << latteCount << std::endl;
            break;
        }

        std::cout << "Water left: " << waterAmount << " ml" << std::endl;
        std::cout << "Milk left: " << milkAmount << " ml" << std::endl;
        std::cout << "Americano cups made: " << americanoCount << std::endl;
        std::cout << "Latte cups made: " << latteCount << std::endl;
    }

    return 0;
}