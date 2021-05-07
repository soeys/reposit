#include <iostream>
using namespace std;
#include "foo.h"


void SUM::set(int valueX, int valueY)
{
	x = valueX;
	y = valueY;
}

void SUM::show()
{
	cout << x << "\t" << y << "\t" << s;
}


void SUM::addition(void)
{
	s = x + y;
	cout << x << " + " << y << " = " << s << endl;
}