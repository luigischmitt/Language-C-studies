#include <stdio.h>

// Studying if and else
int main()
{
    int age;
    printf("How old are you: ");
    scanf ("%i", &age);

    if (age >= 18) {
        printf("You can drink alcohol.\n");
    } else {
        printf("You can't drink alcohol.\n");
    }

    return 0;
}