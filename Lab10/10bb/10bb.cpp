#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
#define N (10)

void ArrayFilling(int arr[N][N], int n)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = rand() % 21 - 10 + 1;
		}
	}	
}
int ArrayPrint(int arr[N][N], int n)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) 
		{
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	return arr[0][0];
}

int count(int arr[N][N], int n, int k) 
{
	int count = 0;
	for (int j = 0; j < n; j++) 
	{
		if (arr[k - 1][j] > 0) 
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n, arr[N][N]{};
	n = N;
	ArrayFilling(arr, N);
	ArrayPrint(arr, N);


	cout << "\n\nКоличество положительных элементов в каждой строке: \n";
	
	for (int k = 1; k < n + 1; k++) 
	{
		cout << "Количество положительных элементов в " << k << " строке: " << count(arr, n, k);
		cout << endl;
	}

	return 0;
}