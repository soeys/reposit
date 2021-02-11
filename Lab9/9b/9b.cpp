#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int row1, row2, col1, col2;
    int** Arr1, ** Arr2, ** Arr3;
    cout << "Введите количество строк первой матрицы: ";
    cin >> row1;
    cout << "Введите количество столбцов первой матрицы: ";
    cin >> col1;
    cout << "Введите количество строк второй матрицы: ";
    cin >> row2;
    cout << "Введите количество столбцов второй матрицы: ";
    cin >> col2;
    if (col1 != row2)
    {
        cout << "Умножение невозможно!";
        return 0;
    }

    Arr1 = new int* [row1];
    for (int i = 0; i < row1; i++)
    {
        Arr1[i] = new int[col1];
        for (int j = 0; j < col1; j++)
        {
            Arr1[i][j] = rand() % 5;
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << Arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    Arr2 = new int* [row2];
    for (int i = 0; i < row2; i++)
    {
        Arr2[i] = new int[col2];
        for (int j = 0; j < col2; j++)
        {
            Arr2[i][j] = rand() % 5;
        }
    }
    

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << Arr2[i][j] << " ";
        }
        cout << endl;
    }

    Arr3 = new int* [row1];
    for (int i = 0; i < row1; i++)
    {
        Arr3[i] = new int[col2];
        for (int j = 0; j < col2; j++)
        {
            Arr3[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                Arr3[i][j] += Arr1[i][k] * Arr2[k][j];
            }
        }
    }

    cout << "Матрица произведения" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << Arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}