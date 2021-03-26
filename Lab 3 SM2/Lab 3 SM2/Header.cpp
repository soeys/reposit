#ifndef DEBUG
#define DEBUG

#include "Header.h"


void arrayprint(int* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(A + i) << setw(3);
	}
}

void arrayfilling(int* A)
{
	for (int i = 0; i < N; i++)
	{
		*(A + i) = rand() % 10 - 5;
	}
}

void maxarray(int* A, int* amax, int n, int max1, int max2, int max3)
{



	int i;

	for (i = 0; i < N; i++) {
		if (*(A + i) > max1)
		{
			max1 = *(A + i);
		}
	}

	for (i = 0; i < N; i++) {
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


