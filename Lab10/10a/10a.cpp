#include <stdlib.h>
#include <stdio.h>
using namespace std;
#include<iostream>

char Foo(int a, int b)
{
	if (a > b)
	{
		return '>';
	}
	else
	{
		if (a < b)
		{
			return '<';
		}
		else
			return '=';
	}
}

void main() 
{
	for (int i = 0; ; i++)
	{
		int a, b;
		cout << "Введите числа для сравнения: " << endl;
		cout << "Первое число: ";
		cin >> a;
		cout << "Второе число: ";
		cin >> b;

		Foo(a, b);

		cout << a << Foo(a, b) << b;
		cout << endl;

		continue;
	}
}
