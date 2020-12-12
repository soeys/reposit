#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define SIZE 9


int a[SIZE][SIZE];

int main()
{
	// переменные для циклов
	int i, j;
	int max, p;
	max = a[0][0];
	// заполнение матрицы
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			a[i][j] = rand() % 100 + 0;
		}
	}
	// вывод
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("a");
	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (a[0][0] < a[i][j])
			{
				p = a[i][0];
				a[i][0] = a[i][j];
				a[i][j] = p;
			}
		}

	}

	// вывод
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("b");
		printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (a[0][0] > a[i][j])
			{
				p = a[i][0];
				a[i][0] = a[i][j];
				a[i][j] = p;
			}
		}

		for (i = 0; i < SIZE; i++)
		{
			for (j = 0; j < SIZE; j++)
			{
				printf("%3d", a[i][j]);
			}
			printf("\n");
		}
	}
}
