#include <iostream>

/*
Задача 2. ЗОЖ
Лена решила следить за питанием и вести учёт потребляемых белков и углеводов.
На этикетках продуктов указано содержание белков и углеводов на 100 грамм
продукта, но обычно упаковка весит меньше или больше 100 грамм. Напишите
программу, которая принимает на вход информацию с упаковки: количество белков и
углеводов на 100 грамм и массу нетто продукта. На выходе программа сообщает
Лене, сколько белков и углеводов содержится в упаковке с продуктом этого веса.
*/

int main()
{
    float proteinPer100g, fatPer100g, carbsPer100g;
    std::cout << "Enter protein, fats, carbs per 100g: ", std::cin >> proteinPer100g >> fatPer100g >> carbsPer100g;

    float weight;
    std::cout << "Enter weight of the product: ", std::cin >> weight;

    float protein = proteinPer100g * weight / 100;
    float fat = fatPer100g * weight / 100;
    float carbs = carbsPer100g * weight / 100;

    std::cout << "Protein: " << protein << "g\n" << "Fat: " << fat << "g\n", std::cout << "Carbs: " << carbs << "g\n";
    std::cout << "Total: " << protein + fat + carbs << "g\n";
}