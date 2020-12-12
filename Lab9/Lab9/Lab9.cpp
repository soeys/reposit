#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#define S 9
#define ROWS 9
#define COL 9

int a[ROWS][COL];

int main()
{
	srand(time(NULL));
	// заполнение матрицы
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			a[i][j] = rand() % 100 + 0;
		}
	}
	// вывод
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < COL; ++i) 
	{   
		int p = a[i][i];
		a[i][i] = a[i][(COL - 1) - i];
		a[i][(COL - 1) - i] = p;
	}
	//вывод
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%3d", a[i][j]);


		}
			printf("\n");
	}

	return 0;

}