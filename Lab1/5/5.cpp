#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");


	int a, n;
	printf("Введите загаданное число");
	scanf_s("%d", &n);
	a = n + 1;
	printf("%d", a);

}

