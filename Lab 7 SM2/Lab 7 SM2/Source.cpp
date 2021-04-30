#ifndef D
#define D

#include "foo.h"
#include <iostream>
#include<string>
#include <iomanip>  // std::setw
#include <string.h>
using namespace std;

struct culture
{
	char name[20];
	char type;
	int square;
	int yield;

};

culture soy{}, rice{}, miller{};

void keyboard_filling()
{

	FILE* f;

	fopen_s(&f, "file.txt", "w");


	if (f == NULL) {
		puts("Ошибка открытия файла на запись");
		exit(0);
	}
	fseek(f, 0, SEEK_SET);

	cout << "Введите Наименование Тип Посевная площадь (га) Урожайность (ц/га)";
	cin >> soy.name;
	cin >> soy.type;
	cin >> soy.square;
	cin >> soy.yield;

	cout << endl << endl << endl;

	cout << "Введите Наименование Тип Посевная площадь (га) Урожайность (ц/га)";
	cin >> rice.name;
	cin >> rice.type;
	cin >> rice.square;
	cin >> rice.yield;

	cout << endl << endl << endl;

	cout << "Введите Наименование Тип Посевная площадь (га) Урожайность (ц/га)";
	cin >> miller.name;
	cin >> miller.type;
	cin >> miller.square;
	cin >> miller.yield;

	fwrite(&soy, sizeof(soy), 1, f);
	fwrite(&rice, sizeof(rice), 1, f);
	fwrite(&miller, sizeof(soy), 1, f);


	//fwrite(&soy.name, sizeof(soy.name), 1, f);
	//fwrite(&soy.type, sizeof(soy.type), 1, f);
	//fwrite(&soy.square, sizeof(soy.square), 1, f);
	//fwrite(&soy.yield, sizeof(soy.yield), 1, f);

	//fwrite(&rice, sizeof(rice), 1, f);
	//fwrite(&miller, sizeof(miller), 1, f);


	fclose(f);
}

void random_filling() 
{
	//srand(time(0));

	FILE* f;

	fopen_s(&f, "file.txt", "w");


	if (f == NULL) {
		puts("Ошибка открытия файла на запись");
		exit(0);
	}

	fseek(f, 0, SEEK_SET);
	strcpy_s(soy.name, "soy");
	soy.type = 't';
	soy.square = rand() % 15000 + 2500;
	soy.yield = rand() % 50 + 50;

	strcpy_s(rice.name, "rice");
	rice.type = 't';
	rice.square = rand() % 15000 + 2500;
	rice.yield = rand() % 50 + 50;

	strcpy_s(miller.name, "miller");
	miller.type = 'b';
	miller.square = rand() % 15000 + 2500;
	miller.yield = rand() % 50 + 50;


	fputs(soy.name, f);	
	fprintf(f, " ");
	fputc(soy.type, f);
	fprintf(f, " ");
	fprintf(f, "%d", soy.square);
	fprintf(f, " ");
	fprintf(f, "%d", soy.yield);

	fprintf(f, "\n");

	fputs(miller.name, f);
	fprintf(f, " ");
	fputc(miller.type, f);
	fprintf(f, " ");
	fprintf(f, "%d", miller.square);
	fprintf(f, " ");
	fprintf(f, "%d", miller.yield);

	fprintf(f, "\n");

	fputs(rice.name, f);
	fprintf(f, " ");
	fputc(rice.type, f);
	fprintf(f, " ");
	fprintf(f, "%d", rice.square);
	fprintf(f, " ");
	fprintf(f, "%d", rice.yield);

	/*fwrite(&soy, sizeof(culture), 1, f);
	fwrite(&rice, sizeof(culture), 1, f);
	fwrite(&miller, sizeof(culture), 1, f);*/


	fclose(f);
}


void startfile()
{
	FILE* f;
	fopen_s(&f, "file.txt", "r+t");
	if (f == 0)
	{
		puts("......");
		exit(0);
	}

	FILE* ft;
	fopen_s(&ft, "tempfile1.txt", "w+t");
	if (ft == 0)
	{
		puts(".................");
		exit(0);
	}

	culture usercustom{};


	cout << "Данные: ";
	cin >> usercustom.name;
	cout << endl;

	cin >> usercustom.type;
	cout << endl;

	cin >> usercustom.square;
	cout << endl;

	cin >> usercustom.yield;
	cout << endl;


	fwrite(&usercustom, sizeof(culture), 1, ft);


	while (true)
	{
		culture temp{};
		fread(&temp, sizeof(culture), 1, f);
		if (feof(f))
		{
			break;
		}
		fwrite(&temp, sizeof(culture), 1, ft);
	}

	fclose(f);
	fclose(ft);

	remove("file.txt");

	int d = rename("tempfile1.txt", "file.txt");
	if (d == 1)
	{
		cout << "////////";
		exit(0);
	}
}

void endfile() {
	FILE* f;

	fopen_s(&f, "file.txt", "a+b");

	if (f == NULL)
	{
		puts(".......");
		exit(0);
	}
	fseek(f, 0, SEEK_SET);


	culture usercustom{};


	cout << "Данные: ";
	cin >> usercustom.name;
	cout << endl;

	cin >> usercustom.type;
	cout << endl;

	cin >> usercustom.square;
	cout << endl;

	cin >> usercustom.yield;
	cout << endl;
	fwrite(&usercustom, sizeof(culture), 1, f);


	fclose(f);
}

void all_print()
{
	FILE* f;

	fopen_s(&f, "file.txt", "r");
	if (f == NULL)
	{
		puts("///////.");
		exit(0);
	}
	//fseek(f, 0, SEEK_SET);
	while (true)
	{

		culture tempor{};

		fread(&tempor, sizeof(culture), 1, f);
		if (feof(f))
		{
			break;
		}
		cout << tempor.name;
		cout << "\t" << tempor.type;
		cout << "\t" << tempor.square;
		cout << "\t" << tempor.yield << endl;
	}
	fclose(f);
}

void number_print() {
	FILE* f;

	int temp;
	cout << endl;
	cout << "Номер записи: \n";
	cin >> temp;
	cout << endl;

	fopen_s(&f, "file.txt", "r");

	if (f == NULL)
	{
		puts(".............");
		exit(0);
	}

	fseek(f, (temp) * sizeof(culture), SEEK_SET);

	culture tempor{};

	fread(&tempor, sizeof(culture), 1, f);


	cout << tempor.name << "\t" << tempor.type << "\t" << tempor.square << "\t" << tempor.yield << "\t" << endl;



	fclose(f);
}
#endif // !D



