#include <iostream>
#include <conio.h>
#include "windows.h"



int main(void) {
	

	double x, y; 
	
	printf("Введите координату x: ");
	scanf_s("%lf", &x);
	printf("Введите координату y: ");
	scanf_s("%lf", &y);

	printf("x=%6.3lf;  y=%6.3lf\n", x, y);

		if (((x >= -1) && (x <= 1)) && ((y >= -1) && (y <= 1)))
		{
			if ((x <= 0) && (y >= 0))
				 printf("Точка не попадает в область\n");
			else printf("Точка попадает в область\n");

		}
		else	 printf("Точка не попадает в область\n");

		return 0;
}