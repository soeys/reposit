#include <iostream>
#include <cmath>


int main()
{
    int a, b, c, x;
    printf("Введите значение a > ");
    scanf_s("%d", &a);
    printf("Введите значение b > ");
    scanf_s("%d", &b);
    printf("Введите значение c > ");
    scanf_s("%d", &c); 
    if ((b * b - 4 * a * c) >= 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("Первый корень равен: %d\n", x);
        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("Второй корень равен: %d\n", x);
    }
    else
    {
        printf("Дискриминант меньше 0.");
    }

    return 0;
}