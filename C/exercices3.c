#include <stdio.h>

int main(void)
{
    float x = 4.5f;
    float r, t;
    int i, j, s;
    
    printf("%6d,%4d\n", 86, 1040);
    printf("%20.5e\n", 30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n", .0000009979);
    puts("");
    printf("|%-8.1f|", x);
    printf("|%10.6f|", x);
    printf("|%-8.3f|", x);
    printf("|%6.0f|\n", x);
    puts("Ingrese numero: ");
    scanf("%d%f%d", &i, &x, &j);
    printf("i: %d, x: %f, j: %d\n", i, x, j);
    puts("Ingrese numero: ");
    scanf("%f%d%f", &r, &s, &t);
    printf("r: %f, s: %d, t: %f", r, s, t);

    return 0; 

}
