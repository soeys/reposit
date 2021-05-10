#include "Header.h"

#define A switch(op){case 1: foo(a, COL); break; case 2: foo(a, COL); break; }
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
	matrixprint(a, ROWS, COL);
	SPLITTER
		int op;
	cin >> op;
	A;
	matrixprint(a, ROWS, COL);
	SPLITTER

	
	for (int i = 0; i < ROWS; i++)
	{	delete[] a[i];	}

	delete[] a;
	delete[] p;

	return 0;
}