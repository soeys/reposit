#include <iostream>
#include "foo.h"
using namespace std;

struct Data {
	int square;
	char name;
};

struct TList {
	Data info;
	TList* next;
};

TList* head = NULL;  // указатель на начало списка
TList* tail = NULL;  // указатель на конец списка

Data mas[N] = { {1500, 's' }, {200, 'r' }, {2500, 'm' } };

void create()
{
	Data tt;
	TList* temp = new TList;

	for (int i = 0; i < N; i++) {
		temp->next = NULL;

		temp-> info.square = tt.square;
		temp-> info.name = tt.name;
		if (head == NULL) {         //список пустой
			head = tail = temp;
		}
		else {			    //список не пустой
			tail->next = temp;
			tail = temp;
		}
	}
}

void print_()
{
	TList* temp;
	temp = head; //указатель temp на начало списка

	while (temp != NULL) {
		cout << temp->info.square << "\t"
			<< temp->info.name << endl;

		temp = temp->next; //переход к следующему элементу

	}
}

void search_()
{
}

void add_()
{
}

void delete_()
{
	int el;

}

void sort()
{
}

void write_file()
{
}

void print_file()
{
}
