#include <stdio.h>
int main(void){
	int num = 5, i = 0; 
	int num2 = num * 2;
	float num3 = 2.2f;

	printf("Numeros: comun=%d, multiplicado=%d, float=%.1f\n", num, num2, num3); /* Mostramos los numero num num2 y num3*/
	puts("Ingrese un numero comun"); /*Pedimos el ingreso de un numero */
	scanf("%d", &i); /*Lee el numero ingresado*/
	printf("El numero ingresado fue %d.", i);
}
