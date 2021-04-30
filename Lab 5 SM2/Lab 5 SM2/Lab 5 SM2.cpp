#include "Header.h"


int main()
{
	int ROWS, COL;
	cout << "Rows: ";
	cin >> ROWS;
	cout << "Collums: ";
	cin >> COL;

	int **a = new int* [ROWS];
	int* p = new int[ROWS * COL];
	for (int i = 0; i < ROWS; i++)
	{
		a[i] = new int[COL];
	}
	CH;
	switch(a)
	{
	case 1:
		matrixfilling(a, ROWS, COL);
		matrixprint(a, ROWS, COL);
		SPLITTER

			foo(a, COL);


		matrixprint(a, ROWS, COL);
		SPLITTER
			break;
	case 2:	
		break;
	default:
		break;
	}
	for (int i = 0; i < ROWS; i++)
	{
		delete[] a[i];
	}

	delete[] a;
	delete[]p;

	return 0;
}