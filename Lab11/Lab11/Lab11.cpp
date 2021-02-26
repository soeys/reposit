#include <iostream>
using namespace std;

void foo(int x)
{
    int c;
    c = x % 5;
    x /= 5;
    if (x > 0)
    {
        foo(x);
    }
    cout << c;
}

void main()
{
    int x;
    cout << "Введите число: ";
    cin >> x;
    cout << "Ваше число: ";
    foo(x);
}