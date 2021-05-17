#include "ProjectKR.h"

#include <iostream>
using namespace std;
#include <string>

const char* first[] = { "", "один ", "два ",
"три ", "четыре ","пять ",
"шесть ", "семь ", "восемь ", "девять " };
const char* second[] = { "десять ", "одиннадцать " , "двенадцать ",
"тринадцать ", "четырнадцать ",
"пятнадцать ", "шестнадцать ",
"семнадцать ", "восемнадцать ", "девятнадцать " };
const char* third[] = { "", "", "двадцать ", "тридцать ", "сорок ", "пятьдесят ",
"шестьдесят ", "семьдесят ", "восемьдесят ", "девяносто " };
const char* fourth[] = { "", "сто ", "двести ", "триста ", "четыреста ",
"пятсот ", "шестьсот ", "семьсот ", "восемьсот ", "девятьсот " };
const char* fifth[] = { "", "одна тысяча ", "две тысячи ","три тысячи ", "четыре тысячи ",
	"пять тысячь ", "шесть тысяч ", "семь тысячь ", "восемь тысячь ", "девять тысячь " };
const char* sixth[] = { "", "десять тысячь ", "двадцать тысячь ", "тридцать тысячь ",
	"сорок тысячь ", "пятдесят тысячь ", "шестдесят тысячь ", "семдесят тысячь ",
	"восемдесят тысячь ", "девяносто тысячь " };


string fun(int number)
{
	std::string two;

	two = "";

	int d2;
	int st, dt, t, h, d, u, m;
	u = (number % 10);
	d = (number % 100) / 10;
	h = (number % 1000) / 100;
	t = (number % 10000) / 1000;
	dt = (number % 100000) / 10000;
	st = (number % 1000000) / 100000;
	m = number / 1000000;

	if (m > 0) {
		two += *(first + m);
		if (m == 1) {
			two += "миллион ";
		}
		else two += "миллиона ";
	}
	if (st > 0) {
		two += *(fourth + st);
	}

	if (st > 0 & dt == 0 & t == 0) two += "тысячь ";
	else {
		if (dt * 10 + t >= 10 && dt * 10 + t < 20) {
			two += *(second + t);
			two += "тысячь ";
		}
		else {
			if (dt > 0)	two += *(third + dt);
			if (dt > 0 & t == 0) two += "тысячь ";
			else two += *(fifth + t);
		}
	}

	two += *(fourth + h);

	if (d * 10 + u >= 10 & d * 10 + u < 20) {
		two += *(second + u);
	}
	else {
		two += *(third + d);
		two += *(first + u);
	}

	if (st == 0 & dt == 0 & t == 0 & h == 0 & d == 0 & u == 0 & m == 0) two = "ноль";

	return two;
}

void files1(string s) {
	FILE* f;
	fopen_s(&f, "file.txt", "w");
	if (!f) {
		puts("Ошибка открытия файла.\n");
		exit(1);
	}
	fprintf(f, "%s", s.c_str());
	fclose(f);
}

int sort(const char* cstr)
{
	string str1;
	int n = strlen(cstr); // n= длина текста
	for (int i = 0; i < n; i++)
		if (cstr[i] >= '0' && cstr[i] <= '9') str1 += cstr[i];


	int number = stoi(str1);
	return number;
}