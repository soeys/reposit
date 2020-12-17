#include <time.h>
#include <iomanip>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));
	
	int m = 0, 
		n = 0, 
		k = 0, 
		l = 0;



	cout << "Введите размер 1 матрици:(не больше 100) ";
	cin >> m >> n;
	cout << "Введите размер 2 матрици:(не больше 100) ";
	cin >> k >> l;


	if (n != k) {
		cout << "Неверно заданые размеры матриц!!!";
		return 0;
	}

	int** arr = new int* [m];

	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}

	int** arr2 = new int* [k];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[l];
	}
	
	int** arr3 = new int* [k];


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 4;
		}
	}

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			arr2[i][j] = rand() % 4;
		}
	}

	cout << "Array1:" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(6) << arr[i][j];
		}
		cout << endl;
	}

	cout << "Array2:" << endl;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << setw(6) << arr2[i][j];
		}
		cout << endl;

	}


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < l; j++)
		{
			for (int b = 0; b < k; b++)
			{
				arr3[i][j] += (arr[i][b] * arr2[b][j]);
			}
		}
	}
	cout << "Result:" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << setw(6) << arr3[i][j];
		}
		cout << endl;
	}




	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	for (int i = 0; i < k; i++)
	{
		delete[] arr2[i];
	}
	for (int i = 0; i < n; i++)
	{
		delete[] arr3[i];
	}
	delete[] arr;
	delete[] arr2;
	delete[] arr3;

}