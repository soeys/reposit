#include <iostream>
#include <iomanip>
using namespace std;


void arrayFilling(int** arr, int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = rand() % 10;
		}		
	}
}

void arrayPrint(int** arr, int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << setw(3) << arr[i][j];
		}
	}
}

int main()
{
	int N;
	cout << "Введите колво строк: ";
	cin >> N;
	int** arr;
	arr = new int* [N];
	arrayFilling(arr, N);
	arrayPrint(arr, N);


	delete [] arr;
}
