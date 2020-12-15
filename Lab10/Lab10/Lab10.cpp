#include <iostream>
#include <iomanip>
using namespace std;

void ArrayPrint(int* arr, int N1)
{
    for (int n = 0; n < N1; n++)
    {
        cout << setw(4) << arr[n];
    }
}

int* ArrayFuction(int* arr, int** arr2, int N, int M, int N1)
{
    int** arr3;
    arr3 = new int* [N];

    int i = 0;
    int k = 0;
    int j = 0;

    cout << endl;
    cout << endl;

    cout << "Двухмерный массив до изменений:" << endl;

    for (int n = 0; n < N; n++)
    {
        arr3[n] = new int[M];
    }

    for (int n = 0; n < N; n++)
    {
        for (int m = 0; m < M; m++, i++)
        {
            arr2[n][m] = arr[i];
            cout << setw(3) << arr2[n][m];
        }
        cout << endl;
    }

    for (int j = 0; j < M; j++)
    {
        int max = arr2[0][j];
        for (int i = 0; i < N; i++)
        {
            for (int a = 0; a < N; a++)
            {
                if (arr2[a][j] > max)
                {
                    max = arr2[a][j];
                }
            }
            arr3[i][j] = arr2[i][j] + max;

        }

    }

    cout << endl << "Двухмерный массив после изменений:" << endl;

    for (int n = 0; n < N; n++)
    {
        for (int m = 0; m < M; m++)
        {
            cout << setw(4) << arr3[n][m];
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[k++] = arr3[i][j];
        }
    }
    delete[] arr3;
    return arr;
}

int main()
{
    int N, M, N1, temp;
    int* arr;
    int** arr2;

    cout << "Введите колво строк: ";
    cin >> N;
    cout << endl;

    cout << "Введите колво столбцов: ";
    cin >> M;
    cout << endl;

    if (N < 0 || M < 0)
    {
        cout << "Значения должны быть не меньше 0" << endl;
    }
    else
    {
        N1 = N * M;
        arr = new int[N * M];
        arr2 = new int* [N];

        for (int i = 0; i < N; i++)
        {
            arr2[i] = new int[M];
        }

        for (int i = 0; i < N1; i++)
        {
            arr[i] = rand() % 10;
        }

        cout << "Одномерный массив до: " << endl;
        ArrayPrint(arr, N1);

        ArrayFuction(arr, arr2, N, M, N1);

        cout << "Одномерный массив после: " << endl;
        ArrayPrint(arr, N1);
        cout << endl;

        delete[] arr;
        delete[] arr2;
    }
    return 0;
}