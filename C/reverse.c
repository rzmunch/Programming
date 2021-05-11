#include <stdio.h>

int main(void)
{
    int a, b, c;
    puts("Ingrese numeros: ");
    scanf("%1d%1d%1d", &a, &b, &c);
    printf("Ud. ingresó: %d%d%d. Revertido es %d%d%d.", a, b, c, c, b, a);

    return 0;
}


