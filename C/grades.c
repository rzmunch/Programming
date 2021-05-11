#include <stdio.h>

int main(void)
{
    int grade, digit;
    char letter;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    if (grade > 100 || grade < 0){
        printf("Grade outside of range.");
        return 0; 
    }
    
    digit = grade/10;
    switch (digit) {
        case 10 : case 9 : letter='A'; break;
        case 8 : letter='B'; break;
        case 7 : letter='C'; break;
        case 6 : letter='D'; break;
        default : letter='F'; break;
    }
    printf("Letter grade: %c", letter);
    return 0;
}
