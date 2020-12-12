#include <iostream>
using namespace std;


int main()
{
	int a1, a2, b1, b2, c1, c2;
	int i, j;

	cout << "Введите размерность массива А >" << endl;
	cin >> a1 >> b1;

	cout << "Введите размерность массива B >" << endl;
	cin >> a2 >> b2;


	if (b1 != a2)
	{
		cout << "Error";
	}

	int** A = new int* [a1];
	int** B = new int* [a2];
	

	for (i = 0; i < a1; i++)
	{
		for (j = 0; j < b1; j++)
		{
			A[i][j] = rand() % 100 + 0;
		}
	}

	for (i = 0; i < a2; i++)
	{
		for (j = 0; i < b2; j++)
		{
			B[i][j] = rand() % 100 + 0;
		}
	}
	
	for (i = 0; i < a1; i++)
	{
		for (j = 0; i < b1; j++)
		{
			cout << A[i][j] << "  ";
		}
	}

	cout << endl;

	for (i = 0; i < a2; i++)
	{
		for (j = 0; i < b2; j++)
		{
			cout << B[i][j] << "  ";
		}
	}

	for (i = 0; i < a2; i++)
	{
		for (j = 0; i < b2; j++)
		{
			B[i][j] = rand() % 100 + 0;
		}
	}

	int** C = new int* [a1];



	for (int i = 0; i < a1; i++)
	{
		for (int j = 0; j < b2; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < a1; k++)
				C[i][j] += A[i][k] * B[k][j];

		}
	}

	cout << "Матрица произведения" << endl;

	for (int i = 0; i < a1; i++)
	{
		for (int j = 0; j < b2; j++)
			cout << C[i][j] << " ";
		cout << endl;
	}
	
	delete[] A;
	delete[] B;
	delete[] C;
}