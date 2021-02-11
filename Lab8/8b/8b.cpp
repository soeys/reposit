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


	int* arr = new int[10];
	int arr2[100];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < 10; i++)
	{
		arr2[i] = rand() % 10;
	}

	for (int i = 0; i < 10; printf("%3d", arr[i++]));
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

		for (int i = 0; i < element + 1; printf("%3d", arr[i++])); 
		for (int i = 0; i < amount; printf("%3d", arr2[i++]));
		for (int i = element; i < 10 + amount; printf("%3d", arr[i++]));
		break;
	case 2:
		cout << "Сколько элементов удалить?" << endl;
		cin >> amount;

		for (int i = 0; i < element + 1; printf("%3d", arr[i++]));
		for (int i = amount + element; i < 10; printf("%3d", arr[i++]));

	}
	delete[] arr;
}