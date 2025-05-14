#include <iostream>
#include <cmath>

/*
Задание 6. Маятник
Что нужно сделать
Известно, что амплитуда качающегося маятника с каждым разом затухает на 8,4% от
амплитуды прошлого колебания. Если качнуть маятник, он, строго говоря, никогда
не остановится: его амплитуда будет уменьшаться до тех пор, пока мы не сочтём
такой маятник остановившимся. Напишите программу, определяющую, сколько раз
качнётся маятник, прежде чем он, по нашему мнению, остановится. Программа
получает на вход начальную амплитуду колебания в сантиметрах и конечную
амплитуду его колебаний, которая считается остановкой маятника. Обеспечьте
контроль ввода.
*/

int main()
{
    float startAmplitude, endAmplitude;
    std::cout << "Enter start amplitude: ", std::cin >> startAmplitude;

    while(startAmplitude <= 0)
    {
        std::cout << "Start amplitude must be greater than 0. Try again: ", std::cin >> startAmplitude;
    }

    std::cout << "Enter end amplitude: ", std::cin >> endAmplitude;

    while(endAmplitude <= 0)
    {
        std::cout << "End amplitude must be greater than 0. Try again: ", std::cin >> endAmplitude;
    }

    if(startAmplitude < endAmplitude)
    {
        std::cout << "Start amplitude must be greater than end amplitude. Try again: ", std::cin >> startAmplitude, endAmplitude;
    }
    
    int count = 0;

    float currentAmplitude = startAmplitude;

    while(currentAmplitude > endAmplitude)
    {
        currentAmplitude -= currentAmplitude * 0.084;
        count++;
    }

    std::cout << "The pendulum will swing " << count << " times before it stops." << std::endl;

    return 0;
}