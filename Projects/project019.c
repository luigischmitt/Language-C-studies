#include <stdio.h>

// Loops inside loops
int main()
{
    for (int i = 1; i <= 10; i++) {
        printf("**Volta %i**\n", i);
       for (int j = 1; j <= 10; j++) {
            printf("Ponto %i\n", j);
    }
    printf("\n");
    }

    return 0;
}