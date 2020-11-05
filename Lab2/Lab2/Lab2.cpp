#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "windows.h";


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	char name1[9] = "Соя", name2[9] = "Чумиза", name3[9] = "Рис";
	char t1 = 'Б', t2 = 'З', t3 = 'З';
	long long int sqr1 = 13000, sqr2 = 8000, sqr3 = 25650;
	int y1 = 45, y2 = 17, y3 = 24;

	/* printf("1. Введите: название, тип, посевную площадь, урожайность >");
	scanf("%s %c %lld %d", name1, &t1, &sqr1, &y1);
	printf("2. Введите: название, тип, посевную площадь, урожайность >");
	scanf("%s %c %lld %d", name2, &t2, &sqr2, &y2);
	printf("3. Введите: название, тип, посевную площадь, урожайность >");
	scanf("%s %c %lld %d", name3, &t3, &sqr3, &y3); */


	printf("|---------------------------------------------|\n");
	printf("|      Сельскохозяйственные культуры          |\n");
	printf("|---------------------------------------------|\n");
	printf("|          |       |            |             |\n");
	printf("| Наимено- |  Тип  |  Посевная  | Урожайность |\n");
	printf("|  вание   |       |  Площадь   |             |\n");
	printf("|----------|-------|----------- |-------------|\n");
	printf("| %8s | %5c | %10lld | %11d |\n", name1, t1, sqr1, y1);
	printf("| %8s | %5c | %10lld | %11d |\n", name2, t2, sqr2, y2);
	printf("| %8s | %5c | %10lld | %11d |\n", name3, t3, sqr3, y3);
	printf("|---------------------------------------------|\n");
	printf("| Примечание: З - зерновые, Б - бобовые       |\n");
	printf("|_____________________________________________|\n");
	return 0;
}