#include <stdio.h>

// Practicing with exercises - 1 
int main() 
{
    int num1, num2;

    printf("Type 2 integer numbers: ");
    scanf("%i %i", &num1, &num2);

    if (num2 == 0)
        printf("A number cannot be divided by 0.\n");
    else if (num1 % num2 == 0)
        printf("%i can be divided by %i.\n", num1, num2);
    else
        printf("%i can't be divided by %i.\n", num1, num2);

    return 0;
}