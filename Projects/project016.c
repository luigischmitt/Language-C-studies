#include <stdio.h>

// Practicing with exercises - 2 (Inverting numbers)
int main()
{
    int number, cifra;
    printf("Type a number: ");
    scanf("%i", &number);

    if (number >= 0) {
        do {
            cifra = number % 10;
            printf("%i", cifra);
            number /= 10;
        } while (number != 0);
        printf("\n"); 
    } else if (number < 1) {
        number = number * -1;
        printf("-");
        do {
            cifra = number % 10;
            printf("%i", cifra);
            number /= 10;
        } while (number != 0);
        printf("\n");
    }

    return 0;
}