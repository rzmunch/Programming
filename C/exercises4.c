#include <stdio.h>

int main(void)
{
    int i, j, k;
    /* 1) */
    i = 5; j = 3;
    printf("%d %d\n", i / j, i % j); 

    i = 2; j = 3; 
    printf("%d\n", (i + 10) % j);

    i = 7; j = 8; k = 9;
    printf("%d\n", (i + 10) % k / j);

    i = 1; j = 2; k = 3; 
    printf("%d\n", (i + 5) % (j + 2) / k);

    /* 3 4 5 y 6 */
    puts("Ejercicios 3-6");
    printf("%d\n", 8 / 5);
    printf("%d\n", -8 / 5);
    printf("%d\n", 8 / -5);
    printf("%d\n", -8 / -5);

    printf("%d\n", 8 % 5);
    printf("%d\n", -8 % 5);
    printf("%d\n", 8 % -5);
    printf("%d\n", -8 % -5);


    return 0;
}
