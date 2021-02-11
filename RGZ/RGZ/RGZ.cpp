#include <iostream>
#include <iomanip>
using namespace std;
#include <time.h>
#define M 100	
#define N 20
#include <chrono>

int* pancake(int* arr, int size)
{
    for (int cur_size = size; cur_size > 1; cur_size--)
    {

        int max = 0;
        for (int ind = 0; ind < cur_size; ind++)
        {
            if (arr[ind] > arr[max])
            {
                max = ind;
            }
        }

        if (max == cur_size - 1)
            continue;

        for (int j = 0, i = max; j < i; i--, j++)
        {
            swap(arr[j], arr[i]);
        }
        for (int i = 0, j = cur_size - 1; i < j; i++, j--)
        {
            swap(arr[i], arr[j]);
        }
    }
    return arr;
}

int* countingsort(int* arr, int size) 
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int* count = new int[++max];

    for (int j = 0; j < max; j++)
    {
        count[j] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    int  mainarrayindex = 0;
    for (int j = 0; j < max; j++)
    {
        int temp = count[j];
        while (temp--)
        {
            arr[mainarrayindex++] = j;
        }
    }

    delete[] count;

    return arr;
}


int main()
{
    short mas;
    int size;
    int method;

    int arr3[100];

    double dur_arr[M];
    long F = 0;
    double aver_dur = 0;

    cout << "Выберите массив: " << endl;
    cout << "1 - Упорядоченный массив" << endl;
    cout << "2 - Массив, упорядоченный в обратном порядке" << endl;
    cout << "3 - Неупорядоченный массив" << endl;
    cin >> mas;
    cout << "Выберите размер массива: " << endl;
    cin >> size;
    int* arr = new int[size];
    cout << "Изначальный массив:" << endl;
    switch (mas)
    {
    case 1:
        for (int i = 1; i < size + 1; i++)
        {
            arr[i - 1] = i;
        }
        cout << endl;
        break;
    case 2:
        for (int i = 0; i < size; i++)
        {
            arr[i] = size - i;
        }
        break;
    case 3:
        for (int i = 0; i < size; i++)
        {
            arr3[i] = arr[i] = rand() % 100;
        }
        break;
    }
    for (int i = 0; i < size; printf("%3d", arr[i++]));

    cout << endl;
    cout << "Выберите метод сортировки: " << endl;
    cout << "1 - Блинная сортировка" << endl;
    cout << "2 - Сортировка подсчетом" << endl;
    cin >> method;


    switch (method)
    {
    case 1:
        for (int i = 0; i < M; i++)
        {
            switch (mas)
            {
            case 1:
                for (int i = 1; i < size + 1; i++)
                {
                    arr[i - 1] = i;
                }
                break;
            case 2:
                for (int i = 0; i < size; i++)
                {
                    arr[i] = size - i;
                }
                break;
            case 3:
                for (int i = 0; i < size; i++)
                {
                    arr[i] = arr3[i];
                }
                break;
            }

            auto start = std::chrono::high_resolution_clock::now();  
            
            pancake(arr, size);

            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> duration = end - start;
            dur_arr[i] = duration.count();
        }

        cout << endl;

        for (int i = 0; i < size; printf("%3d", arr[i++]));
        cout << endl;
        for (int i = 0; i < M; i++)
        {
            std::cout << "Duration " << i << " = " << dur_arr[i] << "s\n";
            if (i > 0) aver_dur += dur_arr[i];
        }
        std::cout << "Duration a" << " = " << aver_dur / (M - 1) << "s\n";
        cout << endl;
        break;
    case 2:
        for (int i = 0; i < M; i++)
        {
            switch (mas)
            {
            case 1:
                for (int i = 1; i < size + 1; i++)
                {
                    arr[i - 1] = i;
                }
                break;
            case 2:
                for (int i = 0; i < size; i++)
                {
                    arr[i] = size - i;
                }
                break;
            case 3:
                for (int i = 0; i < size; i++)
                {
                    arr[i] = arr3[i];
                }
                break;
            }

            auto start = std::chrono::high_resolution_clock::now();

            countingsort(arr, size);
            
            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> duration = end - start;

            //std::cout << "Duration " << i << " = " << duration.count() << "s\n";
            dur_arr[i] = duration.count();
        }

        // Вывод результата
        for (int i = 0; i < M; i++)
        {
            //std::cout << "Duration " << i << " = " << dur_arr[i] << "s\n";
            if (i > 0) aver_dur += dur_arr[i];
        }
        std::cout << "Duration a" << " = " << aver_dur / (M - 1) << "s\n";

        for (int i = 0; i < size; printf("%3d", arr[i++]));
        break;
    }
    delete[] arr;
}