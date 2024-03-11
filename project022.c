#include <stdio.h>

// Modifying arrays
int main(void)
{
    float score[5] = {0};
    float total = 0;
    float mean = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Type the [%i] score: ", i);
        scanf("%f", &score[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        total += score[i];
    }

    mean = total / 5;

    printf("--------- RESULTS ---------\n");
    printf("The total is %.1f\n", total);
    printf("The mean is %.2f\n", mean);

    return 0;
}