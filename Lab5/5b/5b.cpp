#include <iostream>
using namespace std;
int main()
{
    int k, k2;

    printf("Введите количество грибов > ");
    scanf_s("%d", &k);

    if ((k > 10) && (k <= 20))
    printf("У меня %d грибов", k);
    if (k > 20)
    {
        k2 = k % 10;
        switch (k2)
        {
        case 0:
                printf("У меня %d грибов\n", k);
                break;
        case 1:
            printf("У меня %d гриб\n", k);
            break;
        case 2:
            printf("У меня %d гриба\n", k);
            break;
        case 3:
            printf("У меня %d гриба\n", k);
            break;
        case 4:
            printf("У меня %d гриба\n", k);
            break;
        case 5:
            printf("У меня %d грибов\n", k);
            break;
        case 6:
            printf("У меня %d грибов\n", k);
            break;
        case 7:
            printf("У меня %d грибов\n", k);
            break;
        case 8:
            printf("У меня %d грибов\n", k);
            break;
        case 9:
            printf("У меня %d грибов\n", k);
            break;
        case 10:
            printf("У меня %d грибов\n", k);
            break;
        }
    }

    else switch (k)
    {
    case 1:
        printf("У меня %d гриб\n", k);
        break;
    case 2:
        printf("У меня %d гриба\n", k);
        break;
    case 3:
        printf("У меня %d гриба\n", k);
        break;
    case 4:
        printf("У меня %d гриба\n", k);
        break;
    case 5:
        printf("У меня %d грибов\n", k);
        break;
    case 6:
        printf("У меня %d грибов\n", k);
        break;
    case 7:
        printf("У меня %d грибов\n", k);
        break;
    case 8:
        printf("У меня %d грибов\n", k);
        break;
    case 9:
        printf("У меня %d грибов\n", k);
        break;
    case 10:
        printf("У меня %d грибов\n", k);
        break;
    }
}