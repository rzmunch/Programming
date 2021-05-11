#include <stdio.h>

int main(void) 
{
    int num1, num2, num3, num4, smallest, largest;

    printf("Ingrese 4 numeros: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
    smallest = largest = num1;
    if (num2 > largest)  
       largest = num2;
    if (num3 > largest)
        largest = num3;
    if (num4 > largest)
        largest = num4;
    if (num2 < smallest)
        smallest = num2;
    if (num3 < smallest)
        smallest = num3;
    if (num4 < smallest)
        smallest = num4;
    printf("El numero mayor es: %d, el numero menor es: %d", largest, smallest);

    return 0; 
}
