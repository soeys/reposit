#include "fun.h"

void listCreation(Tlist*& head, Tlist*& tail, int& count, int point, int size)
{
	system("cls");
	Tlist* dd, * posl;
	posl = NULL;
	char c;
	int i = 0;
	dd = (Tlist*)malloc(sizeof(Tlist));
	do {

		if (i == 0)
		{

			cout << "Введите наименование культуры -> ";
			scanf_s("%s", dd->data.name, 10);
			setbuf(stdin, NULL);
			cout << "Введите площадь -> ";
			scanf_s("%d", &dd->data.size);

			dd->prev = posl;
			if (posl != NULL)
				posl->next = dd;
			else
				head = dd;
				posl = dd;
				cout << "\nПродолжить ввод? +/-";
				c = _getch();
		}
		else
		{
			dd = (Tlist*)malloc(sizeof(Tlist));
			cout << "Введите наименование культуры -> ";
			scanf_s("%s", dd->data.name, 10);
			setbuf(stdin, NULL);
			cout << "Введите площадь -> ";
			scanf_s("%d", &dd->data.size);

			dd->prev = posl;
			if (posl != NULL)
				posl->next = dd;
			else
			head = dd;
			posl = dd;
			cout << "\nПродолжить ввод? +/-";
			c = _getch();
			system("cls");
		}
		i++;
	} while (c != '-');
	tail = dd;
	tail->next = NULL;
}

void listPrintFromHead(Tlist* head)
{
	int i = 1;
	system("cls");
	if (head != NULL) {
		Tlist* tmp;
		tmp = head;
		while (tmp != NULL) {
			printf("%d- %-10s  %-4d \n", i, tmp->data.name, tmp->data.size);
			tmp = tmp->next;
			i++;
		}
		printf("\n");
	}
	else
	{
		printf("Ошибка!.");
		_getch();
	}
}

void listPrintFromTail(Tlist* tail) {
	int i = 1;                    //Счетчик для кол-ва строк списка
	system("cls");
	if (tail != NULL) {          //если список не пуст
		Tlist* tmp;               //*temp ставим на конец списка
		tmp = tail;
		while (tmp != NULL) {    //Цикл будет работать пока не дойдет до конца
			printf("%d- %-10s  %-4d\n", i,tmp->data.name, tmp->data.size);
			tmp = tmp->prev;    //переход к предыдущему элементу
			i++;                //Счетчик
		}
		printf("\n");
	}
	else
	{
		printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
		_getch();
	}
}

int searchByParamFromHead(Tlist* head, int count) {
	system("cls");
	int choice;           //Переменная для меню
	Tlist* temp = head;   //Поиск будет совершать с верха
	int i = 1;           //Счетчик строк
	bool q = true;
	while (true)
	{
		system("cls");
		cout << "1 - Поиск по наименованию" << endl;
		cout << "2 - Поиск по площади" << endl;

		cout << "->";
		scanf_s("%d", &choice);
		system("cls");
		switch (choice) {
		case 1:

			char name1[10]; //переменная для сравниванием с переменной которая в списке
			temp = head;         //сделали temp началом списка

			printf("Введите наименование культуры -> ");
			scanf("%s", name1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->data.name, name1) == 0) {
					q = false;
					system("cls");
					printf("%d- %-10s  %-4d \n", i, temp->data.name, temp->data.size);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->next;
			}
			if (q)
			{
				printf("Ошибка! В списке данного имени нет!!!");
				printf("\n\nДля перехода в меню нажмите Enter...");
				_getch();
			}
			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 2:

			unsigned int size1;
			temp = head;

			printf("Введите площадь -> ");
			scanf("%d", &size1);

			while (temp != NULL) {
				if (temp->data.size == size1) {
					q = false;
					system("cls");
					printf("%d- %-10s  %-4d \n", i, temp->data.name, temp->data.size);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->next;
			}
			if (q)
			{
				printf("Ошибка! В списке данного диаметра антены нет!!!");
				printf("\n\nДля перехода в меню нажмите Enter...");
				_getch();
			}

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 5:
			return 0;
			break;


		default:
			system("cls");
			printf("Ошибка! Пункт меню отсутствует!\nНажмите на любую клавишу чтобы продолжить...");
			_getch();
			break;
		}
	}
}

int searchByParamFromTail(Tlist* tail, int count) {
	system("cls");
	int choice;           //Переменная для меню
	Tlist* temp = tail;   //Поиск будет совершать с низа
	int i = 1;           //Счетчик
	bool q = true;

	while (true)
	{

		system("cls");
		cout << "1 - Поиск по наименованию" << endl;
		cout << "2 - Поиск по площади" << endl;
		printf("Ваш выбор -> ");
		scanf_s("%d", &choice);
		system("cls");
		switch (choice) {
		case 1:

			char name1[10]; //переменная для сравниванием с переменной которая в списке
			temp = tail;         //сделали temp концом списка

			printf("Введите имя научного руководителя -> ");
			scanf("%s", name1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->data.name, name1) == 0) {
					q = false;
					system("cls");
					printf("%d- %-10s  %-4d \n", i, temp->data.name, temp->data.size);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->prev;  //переход к предыдущему элементу
			}
			if (q)
			{
				printf("Ошибка! В списке данного имени нет!!!");
				printf("\n\nДля перехода в меню нажмите Enter...");
				_getch();
			}
			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 2:

			unsigned int size1;
			temp = tail;

			printf("Введите диаметр антены -> ");
			scanf("%d", &size1);



			while (temp != NULL) {
				if (temp->data.size == size1) {
					q = false;
					system("cls");
					printf("%d- %-10s  %-4d \n", i, temp->data.name, temp->data.size);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->prev;
			}
			if (q)
			{
				printf("Ошибка! В списке данного диаметра антены нет!!!");
				printf("\n\nДля перехода в меню нажмите Enter...");
				_getch();
			}

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;
		case 3:
			return 0;
			break;


		default:
			system("cls");
			printf("Ошибка! Пункт меню отсутствует!\nНажмите на любую клавишу чтобы продолжить...");
			_getch();
			break;
		}
	}
}



void addToList(Tlist*& head, int& count, int poz) {
	system("cls");

	Tlist* tmp = new Tlist;
	if (poz == 1) {
		tmp->prev = NULL; 
		tmp->next = head;
		head->prev = tmp;
		head = tmp;
	}
	else {
		Tlist* tmpPoz = head;
		for (int i = 0; i < poz - 2; i++)
			tmpPoz = tmpPoz->next;

		tmp->next = tmpPoz->next;
		if (tmp->next != NULL) {
			tmp->next->prev = tmp;
		}
		tmp->prev = tmpPoz;
		tmpPoz->next = tmp;
	}

	cout << "Введите наименование культуры -> ";
	scanf_s("%s", tmp->data.name, 10);
	setbuf(stdin, NULL);
	cout << "Введите площадь -> ";
	scanf_s("%d", &tmp->data.size);
	count++;

}

void deleteFromList(Tlist*& head, int& count, int poz) {
	if (head != NULL) {
		Tlist* tmp = head, * tmpPoz = NULL;

		if (poz == 1) {
			tmpPoz = head->next;
			tmpPoz->prev = NULL;
			delete head;
		}
		else {
			for (int i = 0; i < poz - 1; i++) {
				tmpPoz = tmp;
				tmp = tmp->next;
			}

			tmpPoz->next = tmp->next;
			if (tmpPoz->next != NULL)
				tmpPoz->next->prev = tmpPoz;
			delete tmp;
		}
		count--;
	}
}

void listSorting(Tlist* head, int count) {
	int choice;      //Для меню
	int lines = 0;       //счетчик для посчета количества строчек
	Tlist* ptr, * trash, * tmp;  //Переменные для сортировки

	while (true)
	{
		struct Tlist* temp = head;
		while (temp != NULL) 
		{
			temp = temp->next;
			lines++;
		}

		tmp = (struct Tlist*)malloc(sizeof(struct Tlist));

		for (int n = 0; n < lines; n++)
		{
			ptr = head;
			while (ptr->next != NULL)
			{
				temp = ptr->next;
				if (ptr->data.size >= temp->data.size)
				{
					trash = temp->next;
					*tmp = *ptr;
					*ptr = *temp;
					free(temp);
					ptr->next = (struct Tlist*)malloc(sizeof(struct Tlist));
					*ptr->next = *tmp;
					ptr->next->next = trash;
				}
				ptr = ptr->next;
			}
		}
		free(tmp);
	}

}

void createFile(Tlist* head, int count) {
	Tlist* temp;
	temp = head;
	int i = 1;
	
	FILE* file;
	fopen_s(&file, "Result.txt", "w");
	if (file == NULL) {
		printf("Ошибка!");
	}
	while (temp != NULL)
	{
		fprintf_s(file, "%10s  %4d\n",  temp->data.name, temp->data.size);
		temp = temp->next;  
		i++;
	}
	fclose(file);
}

void createListFromFile(Tlist*& head, Tlist*& tail) {
	Tlist* dd, * posl;
	posl = NULL;

	int size = 0, i = 0;

	FILE* file = NULL;
	fopen_s(&file, "Result.txt", "r");
	if (file == NULL) {
		puts("Ошибка открытия файла");
	}

	char text;
	while (true) {
		text = fgetc(file);
		if (text == '\n')size++;
		else if (text == EOF) break;
	}

	fseek(file, 0, SEEK_SET);
	while (i != size) {
		dd = (Tlist*)malloc(sizeof(Tlist));
		fscanf_s(file, "%s", dd->data.name, 10);
		fscanf_s(file, "%d", &dd->data.size);

		i++;
		dd->prev = posl;   //переставить указатель posl      //передали значение 


		if (posl != NULL)
			posl->next = dd;
		else
			head = dd;
		posl = dd;
		tail = dd;
	}
	tail->next = NULL; // предпоследний элемент

	fclose(file);
}