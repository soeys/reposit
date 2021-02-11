#include <iostream>
using namespace std;

void step(int x)
{
    int c;
    c = x % 5;
    x /= 5;
    if (x > 0)
    {
        step(x);
    }
    cout << c;
}

void main()
{
    int a;
    cout << "Введите число: ";
    cin >> a;
    cout << "Ваше число: ";
    step(a);
}
