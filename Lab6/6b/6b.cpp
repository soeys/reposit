#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctime>

// r1 r2 - рандомные числа, m -  умножение, а - ответ, c - правильно 

int main()
{
    srand((unsigned)time(NULL));

    int r1, r2;
    int c = 0;

    for (int i = 0; i < 10; i++)
    {
        r1 = rand() % 9 + 1;
        r2 = rand() % 9 + 1;
        int m = r1 * r2;
        int a = 0;
        printf("%i * %i = ", r1, r2);
        scanf_s("%i", &a);
        if (a == m) 
        {
            c++;
        }
       
    }
    printf("Вы правильно посчитали %i из 10\n", c);


    if (c <= 2)
    {
        printf("1 бал, ганьба!");
    }
    else if (c >= 2, c <= 4)
    {
        printf("2 бала, старайтесь лучше!");
    }
    else if (c >= 4, c <= 6)
    {
        printf("3 бала, удовлетворительно");
    }
    else if (c >= 6, c <= 8)
    {
        printf("4 бала, хорошо");
    }
    else printf("5 балов, отлично");
    
}

