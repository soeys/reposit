#include "Header.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size;
	cout << "Razmer masiva >";
	cin >> size;

	int* A = new int[size];
	int amax[3];
	int max1, max2, max3;

	arrayfilling(A, size);
	arrayprint(A, size);
	EDNLINER;
	max1 = *(A + 0);
	max2 = *(A + 0);
	max3 = *(A + 0);

	maxarray(A, amax, size, max1, max2, max3);
	arrayprint(amax, 3);

	delete[] A;
	return 0;
}