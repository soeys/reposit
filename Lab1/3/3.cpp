#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
int main()
{
	float a, b, c, d;

	printf("Enter your number: ");
	scanf_s("%f", &a);

	b = a * a;
	c = b * b;
	d = c * c;

	printf("Your number in 8 degree is: %f", d);
}