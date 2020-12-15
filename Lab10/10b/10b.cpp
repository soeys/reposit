#include <iostream>
#include <iomanip>
using namespace std;






int main()
{
	int N = 5;

	int** arr= new int* [N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[N];
	}


	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j < N; i++)
		{
			arr[i][j] = rand() % 20;
		}

	}

	
	

	delete [] arr;
}
