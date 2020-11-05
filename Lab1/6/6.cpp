#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	int years, sec;

	years = 2020;
	sec = 60 * 60 * 24 * 365 * years;
	printf("There are %lld in 2020 year \n", sec);

	years = 100;
	sec = 60 * 60 * 24 * 365 * years;
	printf("There are %lld second in 100 years \n", sec);

	years = 1000;
	sec = 60 * 60 * 24 * 365 * years;
	printf("There are %lld in 1000 years \n", sec);
}