#include "asdasd.h"
#include "fucnheader.h"
#include "asdasd.h"
#include "fucnheader.h"

int main()
{

	int option;

	while (1) {
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
		case 1:
			keyboard_filling(mm[3]);
			break;
		case 2:
			random_filling(mm[3]);
			break;
		case 3:
			table_sort(mm[3]);
			break;
		case 4:
			table_print(mm[3]);
			break;
		case 5: exit(0);
		}
	}

}