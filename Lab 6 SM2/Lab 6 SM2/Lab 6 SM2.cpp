#include <stdio.h>
#include <iostream>
using namespace std;
#define SIZE 100 
#define COUTDOUBLE cout << endl << endl;
#include "Source.h"

int main() {

	char s1[SIZE];
	for (;;) {
		cout << "Введите символы латиницы: " << endl;
		if (!strcmp(gets_s(s1), "***")) break;
		swapp(s1);
	}
}