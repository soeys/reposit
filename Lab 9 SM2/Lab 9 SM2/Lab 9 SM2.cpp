#include "fun.h"

int main(void) {

	SetConsoleCP(1251);
	int choice = 0, count = 0, size = 0, poz;
	Tlist* head = NULL;       //указатель на начало списка
	Tlist* next = NULL;
	Tlist* prev = NULL;
	Tlist* tail = NULL;      //указатель на конец списка

	while (true)
	{

		cout << "1 - Создание списка\n";
		cout << "2 - Печать с начала\n";
		cout << "3 - Печать с конца\n";
		cout << "4 - Поиск по критерию с начала\n";
		cout << "5 - Поиск по критерию с конца\n";
		cout << "6 - Добавление элемента (в любое заданное место)\n";
		cout << "7 - Удаление любого элемента\n";
		cout << "8 - Сортировка\n";
		cout << "9 - Запись списка в файл \n";
		cout << "10 - Создание нового списка из файла \n";
		cout << "11 - Выход из программы\n";
		cout << ">> ";

		cin >> choice;

		switch (choice) {
		case(1):
			listCreation(head, tail, count, choice, size);
			break;

		case(2):
			if (head == NULL) {
				cout << "Структуры не существует\n";
				break;
			}

			listPrintFromHead(head);
			break;

		case(3):
			if (head == NULL) {
				cout << "Структуры не существует\n";
				break;
			}

			listPrintFromTail(tail);
			break;

		case(4):
			if (head == NULL) {
				cout << "Структуры не существует\n";
				break;
			}

			else
			searchByParamFromHead(head, count);
			break;

		case(5):
			if (head == NULL) {
				cout << "Структуры не существует\n";
				break;
			}

			else
			searchByParamFromTail(tail, count);
			break;

		case(6):
			if (head == NULL) {
				cout << "Структуры не существует\n";
				break;
			}

			else
			{
				system("cls");
				listPrintFromHead(head);
				cout << "\n\nВведите номер -> ";
				cin >> poz;
				addToList(head, count, poz);
			}
			break;


		case(7):
			if (head == NULL) {
				cout << "Структуры не существует\n";
				break;
			}

			else {
				system("cls");
				listPrintFromHead(head);
				cout << "\n\nВведите номер удаляемого элемента -> ";
				cin >> poz;
				deleteFromList(head, count, poz);
			}
			break;

		case(8):
			if (head == NULL) {
				cout << "Структуры не существует\n";
				break;
			}
			else
				listSorting(head, count);
			createFile(head, count);
			createListFromFile(head, tail);
			break;

		case(9):
			if (head == NULL) {
				cout << "Структуры не существует\n";
				break;
			}
			else
			createFile(head, count);
			break;

		case(10):
			createListFromFile(head, tail);
			break;

		case(11):
			return 0;

		default:
			system("cls");
			cout << "Неверное число\n";
			break;
		}
	}

	free(head);
	return 0;
}