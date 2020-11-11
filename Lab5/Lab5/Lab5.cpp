#include <stdio.h>

int main()
{
    double x, y;

    printf("Введите х: ");
    scanf_s("%lf", &x);
    printf("Введите y: ");
    scanf_s("%lf", &y);

    printf("x = %lf, y = %lf \n", x, y);

    if (((x <= 1, y <= 1) && (x >= 0, y >= 0))
        && ((x <= 0, y <= 0) && (x >= -1, y >= -1))
        && ((x <= 1, y <= 0) && (x >= 0, y >= -1)))
        printf("Точка попадает в область\n");
    else
        printf("Точка не попадает в область\n");

    return 0;
}