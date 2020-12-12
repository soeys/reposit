#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
using namespace std;
#include <iostream>


int main()
{
	int option;
	int element;
	int amount;
	int arr[10]; int newarr[100];
	int i = 0;
	for (int i = 0; i < 10; arr[i++] = rand() % 10 + 0);
	for (int i = 0; i < 10; i++)
	{
		newarr[i] = arr[i];
	}
	cout << "Масив: ";
	
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	
	cout << endl;
	cout << "Что вы хотите сделать с масивом?" << endl; 
	cout << "1 - Добавить элемент" << endl;
	cout << "2 - Удалить  элемент" << endl;
	cin >> option;
	cout << "С какого элемента?" << endl;
	cin >> element;
	if (element > 10) { cout << "В масиве максимум 10 элементов" << endl; }

	switch (option)
	{
		case 1:	
			cout << "Сколько элементов добавить?" << endl;
			cin >> amount;
			if (amount < 0) { cout << "Вы ввели отрицательное число" << endl; }
			if (amount > 10) { cout << "В масиве максимум 10 элементов" << endl; }
			
			cout << "Масив после изменений: ";
			for (i = 0; i <= element; i++)
			{
				cout << newarr[i] << "  ";
			}
			for (i = 1; i <= amount; i++)
			{
				newarr[element + i] = rand() % 10 + 0;
				cout << newarr[element + i] << "  ";
			}
			for (i = element; i < 10; i++)
			{
				cout << newarr[i] << "  ";
			}
			

			
			break;
		
			
			
			
			
			
		case 2:
			cout << "Сколько элементов удалить?" << endl;
			cin >> amount;
			break;

			for (i = 0; i < element; i++)
			{
				cout << newarr[i] << "  ";
			}
			cout << "Масив после изменений: ";
			for (i = 0; i < 10; i++)
			{
				cout << newarr[i] << "  ";
			}

	}
		
}