#include "Source.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	char s1[SIZE];
	for (;;) {
		cout << "Введите символы латиницы: " << endl;
		if (!strcmp(gets_s(s1), "***")) break;
		swapp(s1);
	}
}