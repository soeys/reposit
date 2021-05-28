
#include "Header.h"

void matrixfilling(int** a, int ROWS, int COL)
{
	srand(time(NULL));

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			*(*(a + i) + j) = rand() % 100 + 0;
		}
	}
}

void matrixprint(int** a, int ROWS, int COL)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%3d", *(*(a + i) + j));
		}
		printf("\n");
	}
}

void matrixprint2(int* p, int ROWS, int COL)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%3d", (*(p + i) + j));
		}
		printf("\n");
	}
}

void foo(int** a, int COL)
{
	for (int i = 0; i < COL; ++i)
	{
		int p = *(*(a + i) + i);
		*(*(a + i) + i) = *( *(a + i) + (COL - 1) - i);
		*(*(a + i) + (COL - 1) - i) = p;
	}
}

//
void foo23(int* p, int COL)
{
	for (int i = 0; i < COL; ++i)
	{
		int temp = *(p + i * COL + i);
		*(p + i * COL + i) = *(p + i * (COL - 1) - i);
		*(p + i * (COL - 1) - i) = temp;
	}
}



