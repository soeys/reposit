#include "Header.h"
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

void table_sort()
{
	int option_two;
	int size = 3;
	cout << "By square - 1, by yield - 2 >>";
	cin >> option_two;
}

void table_print()
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

void random_filling()
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

void keyboard_filling()
{
	for (int i = 0; i < 3; i++) {
		cout << "Введите Наименование Тип Посевная площадь (га) Урожайность (ц/га)";
		cin >> mm[i].name;
		cin >> mm[i].type;
		cin >> mm[i].square;
		cin >> mm[i].yield;
	}
}