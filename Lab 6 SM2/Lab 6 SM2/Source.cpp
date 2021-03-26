#ifndef DEBUG

#define DEBUG
#include "Source.h"
#include <stdio.h>
#include <iostream>
using namespace std;

void swapp(char* s1)
{
	char s2[SIZE];
	for (int i = 0; i < strlen(s1); i++) {
		if (int(s1[i]) > 90 && int(s1[i]) < 123) {
			s2[i] = int(s1[i] - 32);
			cout << s2[i];
		}
		else {
			s2[i] = int(s1[i] + 32);
			cout << s2[i];
		}
	}
	EXITOPTION
}

#endif // !DEBUG

