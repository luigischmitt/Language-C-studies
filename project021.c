#include <stdio.h>

// Learning how to declare arrays
int main(void)
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Type the number in position [%i]: ", i);
        scanf("%i", &array[i]);
    }
    
    printf("The array is: ");

    for (int i = 0; i < 5; i++)
    {
        printf("{%i}", array[i]);
    }

    return 0;
}