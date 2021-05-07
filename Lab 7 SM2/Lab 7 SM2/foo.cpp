#define  _CRT_SECURE_NO_WARNINGS

#include "foo.h"
#include <iostream>
#include<string>
#include <iomanip>
#include <string.h>
using namespace std;

struct culture
{
	char name[20];
	char type;
	int  square;
	int  yield;

};

culture soy;

void keyboard_filling()
{
	system("cls");
	FILE* f;
	fopen_s(&f, "file.txt", "w");
	if (!f) {
		puts("Ошибка открытия файла.\n");
		exit(1);
	}

	printf("Введите данные:\n");
	printf("Введите наименование -> ");
	scanf_s("%s", &soy.name, 10);
	printf("Введите тип культуры (б/з) -> ");
	//scanf_s("%s", &soy.type, 2);
	cin >> soy.type;
	//setbuf(stdin, NULL);
	printf("Введите площадь -> ");
	scanf_s("%d", &soy.square);
	printf("Введите урожайность-> ");
	scanf_s("%d", &soy.yield);

	fprintf_s(f, "%-10s  %c  %-10d  %-5d\n", soy.name, soy.type, soy.square, soy.type);

	fclose(f);
	system("cls");
}

void random_filling() 
{
	strcpy_s(soy.name, "soy");
	soy.type = 'b';
	soy.square = rand() % 15000 + 2500;
	soy.yield = rand() % 50 + 50;
	
	FILE* f;
	fopen_s(&f, "file.txt", "w");
	if (f == NULL) {
		puts("Ошибка открытия файла на запись");
		exit(0);
	}
	fseek(f, 0, SEEK_SET);
	fprintf_s(f, "%-10s  %c  %-10d  %-5d\n", soy.name, soy.type, soy.square, soy.yield);
	fclose(f);
}


void startfile()
{
	system("cls");
	int size = 0, i = 0, j = 0;
	char c;
	int line = 0;

	FILE* foud_size;
	fopen_s(&foud_size, "file.txt", "r");
	if (!foud_size) {
		puts("Ошибка открытия файла!!!\nНажмите на любую клавишу чтобы вернуться в меню...");   //Проверка на наличее файла
		return;
	}


	while (true) {
		c = fgetc(foud_size);
		if (c == '\n')size++;
		else if (c == EOF)  break;
	}

	fclose(foud_size);

	int size_string = 100;

	char** str = new char* [size];
	for (int u = 0; u < size; u++)
	{
		str[u] = new char[size_string];
	}

	FILE* data_copying;
	fopen_s(&data_copying, "file.txt", "r");
	if (!data_copying) {
		puts("Ошибка открытия файла.\n");
		exit(1);
	}
	i = 0;
	line = size;
	while (line != 0) {
		fgets(*(str + i), size_string, data_copying);     
		i++;
		line--;
	}
	fclose(data_copying);
	i = 0;

	FILE* file_add_new_data;
	fopen_s(&file_add_new_data, "file.txt", "w");
	if (!file_add_new_data) {
		puts("Ошибка открытия файла.\n");
		exit(1);
	}

	printf("Введите данные:\n");
	printf("Введите наименование -> ");
	scanf_s("%s", &soy.name, 10);
	printf("Введите тип культуры (б/з) -> ");
	//scanf_s("%s", &soy.type, 2);
	cin >> soy.type;
	setbuf(stdin, NULL);
	printf("Введите площадь -> ");
	scanf_s("%d", &soy.square);
	printf("Введите урожайность-> ");
	scanf_s("%d", &soy.yield);

	fprintf_s(file_add_new_data, "%-10s  %c  %-10d  %-5d\n", soy.name, soy.type, soy.square, soy.yield);
	fclose(file_add_new_data);
	//
	FILE* adding_copied_data;
	fopen_s(&adding_copied_data, "file.txt", "a");
	if (!adding_copied_data) {
		puts("Ошибка открытия файла.\n");
		exit(1);
	}
	for (int u = 0; u < size; u++)
	{
		fprintf(adding_copied_data, "%s", str[u]);
	}
	fclose(adding_copied_data);

	for (int u = 0; u < size; u++)
	{
		delete[] str[u];
	}
	delete[] str;

	system("cls");
}

void endfile() {
	system("cls");
	FILE* file_after;
	fopen_s(&file_after, "file.txt", "a");
	if (!file_after) {
		puts("Ошибка открытия файла.\n");
		exit(1);
	}

	printf("Введите данные:\n");
	printf("Введите наименование -> ");
	scanf_s("%s", &soy.name, 10);
	printf("Введите тип культуры (б/з) -> ");
	//scanf_s("%s", &soy.type, 2);
	cin >> soy.type;
	setbuf(stdin, NULL);
	printf("Введите площадь -> ");
	scanf_s("%d", &soy.square);
	printf("Введите урожайность-> ");
	scanf_s("%d", &soy.yield);

	fprintf_s(file_after, "%-10s  %c  %-10d  %-5d\n", soy.name, soy.type, soy.square, soy.yield);
	fclose(file_after);
	system("cls");
}


void number_print() {
	system("cls");
	char c;
	int size = 0;
	int num = 0;
	FILE* file_read;
	fopen_s(&file_read, "file.txt", "r");
	if (!file_read) {
		puts("Ошибка открытия файла!!!\nНажмите на любую клавишу чтобы вернуться в меню...");
		return;
	}

	while (true) {
		c = fgetc(file_read);
		if (c == '\n')size++;
		else if (c == EOF)  break;
	}
	fclose(file_read);

	if ((size % 10 > 4) || (size % 10 == 0) || (size % 100 == 11) || (size % 100 == 12) || (size % 100 == 13) || (size % 100 == 14))
	{
		printf("Всего %d строчек.\n", size);

	}
	if ((size % 10 == 2) || (size % 10 == 3) || (size % 10 == 4))
	{
		printf("Всего %d строчки.\n", size);

	}
	if (size % 10 == 1)
	{
		printf("Всего %d строчка.\n", size);

	}

	printf("Введите номер выводимой строки: ");
	cin >> num;

	if (num > size) {
		cout << endl << "Ошибка! Вы ввели слишком большое число! ";
		return;
	}

	FILE* file_print;
	fopen_s(&file_print, "file.txt", "r");
	if (!file_print) {
		puts("Ошибка открытия файла.\n");
		exit(1);
	}
	system("cls");
	int i = 0;
	while (i != num) {
		fscanf_s(file_print, "%s", &soy.name, 10);
		fscanf_s(file_print, "%s", &soy.type, 2);
		fscanf_s(file_print, "%d", &soy.square);
		fscanf_s(file_print, "%d", &soy.yield);
		i++;
	}
	printf_s("%-10s  %c  %-10d  %-5d\n", soy.name, soy.type, soy.square, soy.yield);
	fclose(file_print);
	printf("\n\n\nНажмите на любую клавишу чтобы вернуться в меню...");
}

void all_print()
{
	int size = 0;
	char c;
	FILE* foud_size;
	fopen_s(&foud_size, "file.txt", "r");
	if (!foud_size) {
		puts("Ошибка открытия файла!!!\nНажмите на любую клавишу чтобы вернуться в меню...");
		return;
	}


	while (true) {
		c = fgetc(foud_size);
		if (c == '\n')size++;
		else if (c == EOF)  break;
	}

	fclose(foud_size);

	FILE* f;
	fopen_s(&f, "file.txt", "r");
	if (!f) {
		puts("Ошибка открытия файла!!!\nНажмите на любую клавишу чтобы вернуться в меню...");
	}
	char ch = fgetc(f);
	cout << ch;
	while (size != 0) { 
		fscanf_s(f, "%s", &soy.name, 10);
		fscanf_s(f, "%s", &soy.type, 2);
		fscanf_s(f, "%d", &soy.square);
		fscanf_s(f, "%d", &soy.yield);

		printf_s("%-10s %c %-10d  %-5d\n", soy.name, soy.type, soy.square, soy.yield);
		size--;
	}

	fclose(f);
}