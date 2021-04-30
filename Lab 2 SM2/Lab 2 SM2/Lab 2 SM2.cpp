#include <iostream>
#include<string>
#include <iomanip>  // std::setw
using namespace std;
#include "Header.h"
#define printtype case 1: keyboard_filling();	break; case 2: random_filling(); break;

int main()
{
	int option;

	while (1)
	{
		cout << "Меню различного заполнения списка структур" << endl;
		cout << "1. Ввод с экрана " << endl;
		cout << "2. Рандомайзер" << endl;
		cout << "3. Cортировка" << endl;
		cout << "4. Вывод таблицы" << endl;
		cout << "5. Выход" << endl;
		cout << " ->";
		cin >> option;
		switch (option)
		{
			printtype
			case 3: table_sort(); break;
			case 4:	table_print();	break;
			case 5: exit(0);
		}
	}
}