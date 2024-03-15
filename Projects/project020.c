#include <stdio.h>

// Learning how to use Arrays
int main(void)
{
    float score[5];  // or float score[5] = {7, 5.5, 8.5, 9, 6.5};

    score[0] = 7;
    score[1] = 5.5;
    score[2] = 8.5;
    score[3] = 9;
    score[4] = 6.5;

    printf("%.1f", score[0]);

    return 0;
}