#include <iostream>
using namespace std;
#include "Source.h"
int main()
{
	int number;
	for (;;)
	{
		cout << "Введите число\n>";
		cin >> number;
		if (number >= 0 & number <= 3000000)
		{
			fun(number);
		}
		else
		{
			break;
		}
	}
}


