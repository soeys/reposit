#include <iostream>
#include <ctime>


int main() {
    
    srand((unsigned)time(NULL));
    int n = rand() % 100;
    int a; 
    int i = 1;
 
    while (i <= 10) {
        printf("Попытка #%d > ", i);
        scanf_s("%d", &a);
        if (a < n) printf("Мало\n");
        else
            if (a > n) printf("Много\n");
            else {
                printf("Угадано!\n");
                break;
            }
        i += 1;
    }
    if (i == 11)
        printf("Не угадали. Это число %d\n", n);
}
