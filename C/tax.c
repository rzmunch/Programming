#include <stdio.h>

#define TAX 1.05f

int main(void)
{
    float amount = 0.0f;

    puts("Enter the amount of money you need to pay: ");
    scanf("%f", &amount);
    amount = amount * TAX;
    printf("Yo have to pay: %.2f.", amount);

}
