#include <iostream>
#include<string>
#include <iomanip>  // std::setw
using namespace std;

struct culture
{
	char name[20];
	char type;
	int square;
	int yield;

} mm[3];

void table_sort(culture)
{
	int option_two;
	int temp;
	int size = 3;
	char name_temp[15];
	cout << "By square - 1, by yield - 2 >>";
	cin >> option_two;

	switch (option_two)
	{
	case 1:
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (mm[j].square > mm[j + 1].square)
				{
					temp = mm[j].square;
					mm[j].square = mm[j + 1].square;
					mm[j + 1].square = temp;
				}
			}
		}
		break;
	case 2:
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (mm[j].yield > mm[j + 1].yield) {
					temp = mm[j].yield;
					//name_temp = { mm[j].name };
					mm[j].yield = mm[j + 1].yield;
					mm[j + 1].yield = temp;
				}
			}
			break;
		}
	}
}

void table_print(culture)
{
	printf("|-------------------------------------------------------------------|\n");
	printf("|                      Agricultural crops                           |\n");
	printf("|-------------------------------------------------------------------|\n");
	printf("|     Name     | Type |      Sown area       |         Yield        |\n");
	printf("|--------------|------|----------------------|----------------------|\n");
	for (int i = 0; i < 3; i++) {
		cout << "|" << setw(14) << mm[i].name
			<< "|" << setw(6) << mm[i].type
			<< "|" << setw(22) << mm[i].square
			<< "|" << setw(22) << mm[i].yield
			<< "|" << endl;
	}
	printf("|-------------------------------------------------------------------|\n");
}

void random_filling(culture)
{

	mm[0] = { "Soy" };
	mm[1] = { "Miller" };
	mm[2] = { "Rice" };
	mm[0].type = 'B';
	mm[1].type = 'C';
	mm[2].type = 'C';

	for (int i = 0; i < 3; i++) {
		mm[i].square = rand() % 17000 + 8000;
		mm[i].yield = rand() + 100 - 0;
	}
}

void keyboard_filling(culture)
{
	for (int i = 0; i < 3; i++) {
		cout << "Введите Наименование Тип Посевная площадь (га) Урожайность (ц/га)";
		cin >> mm[i].name;
		cin >> mm[i].type;
		cin >> mm[i].square;
		cin >> mm[i].yield;
	}
}

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