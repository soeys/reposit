#include "Header.h"


int main()
{
	int ROWS, COL;
	cout << "Rows: ";
	cin >> ROWS;
	cout << "Collums: ";
	cin >> COL;

	int **a = new int* [ROWS];

	for (int i = 0; i < ROWS; i++)
	{
		a[i] = new int[COL];
	}

	matrixfilling(a, ROWS, COL);
	matrixprint(a, ROWS, COL);
	SPLITTER

	foo(a, COL);


	matrixprint(a, ROWS, COL);
	SPLITTER

	for (int i = 0; i < ROWS; i++)
	{
		delete[] a[i];
	}

	delete[] a;
	return 0;
}