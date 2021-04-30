#include <iostream>
#include<string>
#include <iomanip>
using namespace std;
#include "foo.h"
#define printtype case 1: keyboard_filling(); break; case 2: random_filling(); break;

int main()
{
	int option;

	while (1)
	{
		cout << "Меню различного заполнения списка структур" << endl;
		cout << "1. Ввод с экрана и запись в файл. " << endl;
		cout << "2. Ввод случайным образом и запись в файл." << endl;
		cout << "3. Добавить запись в начало файла." << endl;
		cout << "4. Добавить запись в конец файла" << endl;
		cout << "5. Печать одной записи из файла по номеру." << endl;
		cout << "6. Печать всех записей из файла." << endl;
		cout << "7. Выход из программы." << endl;

		cout << " ->";
		cin >> option;
		switch (option)
		{
			printtype
			case 3: startfile(); break;
			case 4:	endfile(); break;
			case 5: number_print(); break;
			case 6: all_print(); break;
			case 7: exit(0);
		}
	}
}