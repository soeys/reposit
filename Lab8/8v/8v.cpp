#include <iostream>
#include <math.h>

using namespace std;

void main()
{
    long number;
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

    int* arr = new int[amount];

    for (int i = 0; i < amount; i++)
    {
        arr[i] = number_2 % 10;
        number_2 /= 10;
    }

    int len = amount - 1;

    for (int i = 0; i < amount; i++)
    {
        reverse += pow(10, len) * arr[i];
        len--;

    }

    cout << "Число наоборот: " << reverse << endl;
    cout << "Сумма цифр числа: " << sum << endl;
    cout << "Количество цифр в числе: " << amount << endl;

    delete[] arr;
}