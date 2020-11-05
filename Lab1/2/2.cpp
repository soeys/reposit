#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;




int main()
{
	double a, b, c, s, p;
	setlocale(LC_ALL, "Rus");
	printf("Введите длину первой стороны", "\n");
	scanf_s("%lf", &a);
	printf("Введите длину второй стороны", "\n");
	scanf_s("%lf", &b);
	printf("Введите длину третьей стороны", "\n");
	scanf_s("%lf", &c);
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("Площадь равна: %lf", s, "\n");

}



