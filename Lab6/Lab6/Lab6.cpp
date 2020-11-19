#include <stdio.h>
#include <math.h>

int main(void) 
{
	int long n;
	double dbl;
	double sum = 0;
	double term;
	const double eps = 0.000001;
	int k1 = 1; // pow -1 n

	for (n = 0; ; n++, k1 = -k1)
	{
		dbl = n;

		term = k1 * ( dbl + 1 ) / ( (dbl * dbl * dbl) - (dbl * dbl) + 1 );
		if (fabs(term) >= eps)
			sum += term;
		else break;

		if (n == 9)
			printf("Сумма 10 членов ряда = %10.7lf\n", sum);
		
	}
	
	printf("Полная сумма ряда = %10.7lf\n", sum);
	return 0;


}