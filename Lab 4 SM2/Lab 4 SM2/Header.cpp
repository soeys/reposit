#ifndef DEBUG
#define DEBUG

#include "Header.h"
#include <iostream>
#include <iomanip>
using namespace std;

void arrayprint(int* A, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(A + i) << setw(3);
	}
}

void arrayfilling(int* A, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(A + i) = rand() % 10 - 5;
	}
}

void maxarray(int* A, int* amax, int size, int max1, int max2, int max3)
{



	int i;

	for (i = 0; i < size; i++) {
		if (*(A + i) > max1)
		{
			max1 = *(A + i);
		}
	}

	for (i = 0; i < size; i++) {
		if ((*(A + i) > max2) && (*(A + i) < max1))
		{
			max2 = *(A + i);
		}
	}

	for (i = 0; i < N; i++) {
		if ((*(A + i) > max3) && (*(A + i) < max2))
		{
			max3 = *(A + i);
		}
	}

	amax[0] = max1;
	amax[1] = max2;
	amax[2] = max3;
}

#endif // DEBUG


