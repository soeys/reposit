#include <stdio.h>
#include <math.h>
#include <iostream>




int main(void)

{

	double x, y;

	double a = 12.5, b = 1.3;


	double t1, t2;

	double ax;


	/*printf("Введите x, y ");
	scanf_s("%lf %lf", &x, &y);*/


	printf("Введите х > ");
	scanf_s("%lf", &x);
	printf("Введите y > ");
	scanf_s("%lf", &y);



	ax = a * x;

	t1 = (1 / pow(b, 3) * (log(y / x)) - (pow(ax, 2)) / (2 * pow(y, 2)));


	ax = a * x / 2 * 3, 14 / 180;

	t2 = ((1 / a) * tan(ax) + (1 / a) * log(tan(ax)));

	printf("t1 = %lg\n", t1);
	printf("t2 = %lg\n", t2);


}