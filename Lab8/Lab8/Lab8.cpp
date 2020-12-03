#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Arr[200];

int main(void)
{
	srand(time(NULL));
	
	int i;
	
	int max1;
	int max2;
	int max3;

	for (i = 0; i < 100; Arr[i++] = rand() % 100 + 0);

	printf("Начальный массив:\n");

	for (i = 0; i < 100; printf("%3d   ", Arr[i++]));

	max1 = Arr[0];
	max2 = Arr[0];
	max3 = Arr[0];

	for (i = 0; i < 200; i++) {
		if (Arr[i] > max1)
		{
			max1 = Arr[i];
		}
	}

	/*printf("max1 %d\n", max1);*/

	for (i = 0; i < 200; i++) {
		if ( (Arr[i] > max2) && (Arr[i] < max1) )
		{
			max2 = Arr[i];
		}
	}

	//printf("max2 %d\n", max2);

	for (i = 0; i < 200; i++) {
		if ( (Arr[i] > max3) && (Arr[i] < max2) )
		{
			max3 = Arr[i];
		}
	}

	//printf("max3 %d\n", max3);

	for (i = 0; i < 200; i++) {
		if (Arr[i] > max3)
		{
			Arr[i] = max3;
		}

	}

	printf("\n");
	printf("\n");

	printf("Конечный массив:\n");
	for (i = 0; i < 100; printf("%3d   ", Arr[i++]));

	return 0;
}