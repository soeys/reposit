#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
#define N 3
#include "Header.h"

void church::set(string a, char b, int c, int d) {
    name = a;
    school = b;
    count = c;
    square = d;
}

void church::get(string a, char& b, int& c, int& d)
{
    a = name;
    b = school;
    c = count;
    d = square;
}

void church::show(void) {
    cout << name << " ";
    cout << school << " ";
    cout << count << " ";
    cout << square << " ";
}
