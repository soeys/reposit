#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number;
    int amount = 0; 
    int sum = 0;
    int reverse = 0;

    cout << "Введите число: ";
    cin >> number;

    int number_2 = number;

   while (number != 0)
    {
        sum += number % 10;
        number /= 10;
        amount++;
    }

    size_t c; // инициализация переменной для колличества элементов массива 

    c = amount;

    int* arr = new int[c]; // выделяем память 

    for (int i = 0; i < c; i++) // заполнение массива 
    {
        arr[i] = number_2 % 10;
        number_2 /= 10;
    }

    int len = c - 1;

    for (int i = 0; i < c; i++) // обьеденение элементов массива в переменную
    {
        reverse += pow(10, len) * arr[i];
        len--;

    }

    cout << "Число наоборот: " << reverse << endl;
    cout << "Сумма цифр числа: " << sum << endl;
    cout << "Количество цифр в числе: " << amount << endl;

    delete[] arr;

    return 0;
}