#include <iostream>
using namespace std;


int main()
{
	int a, b, c;
	a = 0;
	b = 1;
	c = a;

	printf("a = %d \nb = %d\n\n", a, b);

	a = b;
	b = c;

	printf("a = %d \nb = %d\n\n", a, b);

	swap(a, b);

	printf("a = %d \nb = %d\n\n", a, b);

}
