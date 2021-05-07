// После рефакторинга char на string
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
#define N 3
#include "Header.h"


int main(void) {
    int h;
    int option;
    string n;
    char t;
    int s;

    church obj[N];
    system("cls");
    //cout << "1.Сеттер\n2.Геттер\n3.Вывод\n>";
    for (int i = 0; i < N; i++)
    {
        cout << "Наименование, Тип, Посевная площадь (га), Урожайность (ц/га): ";
        cin >> n;
        cin >> t;
        cin >> s;
        cin >> h;
        obj[i].set(n, t, s, h);
    }

    for (int i = 0; i < N; i++)
    {
        obj[i].get(n, t, s, h);
        cout << endl;
    }
    cout << "Наименование, Тип, Посевная площадь (га), Урожайность (ц/га): \n";
    for (int i = 0; i < N; i++)
    {
        obj[i].show();
        cout << endl;
    }
    _getch();
    return 0;
}
