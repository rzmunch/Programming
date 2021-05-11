#include <stdio.h>

int main(void)
{
    int x, calc = 0;
    
    puts("Ingresa un valor de x para calcular el polinomio 3x^5 + 2x^4 -5x^3 -x^2 +7x -6:");
    scanf("%d", &x);
    /*calc = (3*(x*x*x*x*x) + 2*(x*x*x*x) -5*(x*x*x) -(x*x) +7*x -6);*/
    calc = ((((3*x + 2)*x -5)*x -1)*x +7)*x -6;
    printf("El valor final es: %d", calc);
    return calc;
}
