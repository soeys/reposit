#include "fun.h"


int main(void) {


	int choice, el;
	struct mon* head = NULL;
	mon tt;

	while (true)
	{
		cout << "Меню различного заполнения списка структур" << endl;
		cout << "1. Создание списка." << endl;
		cout << "2. Печать списка." << endl;
		cout << "3. Поиск по критерию." << endl;
		cout << "4. Добавление элемента в любое заданное место." << endl;
		cout << "5. Удаление  любого элемента." << endl;
		cout << "6. Сортировка. " << endl;
		cout << "7. Запись нового списка в файл." << endl;
		cout << "8. Печать нового списка из файла." << endl;
		cout << "0. Выход из программы." << endl;
		printf("Ваш выбор -> ");
		scanf_s("%d", &choice);

		switch (choice) {
		case(1): head = new_spis();
			break;

		case(2):
			if (head == NULL) {
				system("cls");
				cout << "Список отсутствует";
				break;
			}
			print(head);
			break;

		case(3):
			if (head == NULL) {
				system("cls");
				cout << "Список отсутствует";
				break;
			}
			else
				search_spis(head);

			break;

		case(4):
			if (head == NULL) {
				system("cls");
				cout << "Список отсутствует";
				_getch();
				break;
			}
			else
			{
				system("cls");
				print(head);
				cout << "\n\nВведите номер места для нового элемента -> ";
				scanf_s("%d", &el);
				system("cls");
				printf("Введите данные:\n");
				printf("Введите площадь -> ");
				scanf_s("%d", &tt.sq);
				printf("Введите наименование -> ");
				scanf_s("%s", tt.name, 10);

				head = add_spis(el, tt, head);
			}
			break;

		case(5):
			if (head == NULL) {
				system("cls");
				printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
				_getch();
				break;
			}
			else {
				system("cls");
				print(head);
				cout << "\n\nВведите номер удаляемого элемента -> ";
				cin >> el;
				head = del_spis(el, head);

			}

			break;

		case(6):
			if (head == NULL) {
				cout << "Список отсутствует";
				break;
			}
			else
				head = sort_spis(head, tt);
			break;

		case(7):
			if (head == NULL) {
				cout << "Список отсутствует";
				break;
			}
			else
				addfile_in_spis(head);
			break;

		case(8): head = create_from_file();
			break;

		case(0):
			system("cls");
			return 0;

		default:
			system("cls");
			printf("Ошибка");
			break;
		}
	}

	free(head);
	return 0;
}