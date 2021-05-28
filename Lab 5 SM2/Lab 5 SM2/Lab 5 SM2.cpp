#include "Header.h"

#define A switch(op){case 1: foo(a, COL); matrixprint(a, ROWS, COL); break; case 2: foo23(p, COL); matrixprint2(p, ROWS, COL); break; }
int main()
{
	int ROWS, COL;
	cout << "Rows: ";
	cin >> ROWS;
	COL = ROWS;

	int **a = new int* [ROWS];
	int* p = new int[ROWS * COL];
	for (int i = 0; i < ROWS; i++)
	{
		a[i] = new int[COL];
	}

	matrixfilling(a, ROWS, COL);


	

	SPLITTER

		cout << "1,2 - ? > ";
	int op;
	cin >> op;
	
	A;
	SPLITTER

	printf("\nМодернизированный массив: \n");   //Вывод модернизированного массива


	
	for (int i = 0; i < ROWS; i++)
	{	delete[] a[i];	}

	delete[] a;
	delete[] p;

	return 0;
}