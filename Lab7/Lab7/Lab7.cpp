#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, h;
	double x, y;
	
	for (n = 0; n < 5; n++) {
		printf("|   x   |      y     |\n");
		printf("|-------|------------|\n");

		for (x = 0; x < 8; x += 0.25)
		{
			if (x < 2) {
				y = sqrt( 1 - (x - 1) * (x - 1) );
			}
			else if (x < 4) {
				y = sqrt(1 - (x - 3) * (x - 3));
			}
			else if (x < 6) {
				y = sqrt(1 - (x - 5) * (x - 5));
			}
			else {
				y = 0;
			}
			printf("| %5.2lf | %10.7lf |", x + n * 8, y);

			h = (y + 1) * 10;
			if (y - 1 - h * 10 > 0.5) h++;
			for (; h > 0; h--) printf(" ");
			printf("*\n");

		}
		getchar();

	}
	return 0;

}