#include <stdio.h>

// Introducing to math operations:
int main()
{
    int my_age = 20;
    int dad_age = 50;
    int mom_age = 45;
    int sis_age = 15;

    int age_sum;
    age_sum = my_age + dad_age + mom_age + sis_age;
    int mean_age;
    mean_age = (my_age + dad_age + mom_age + sis_age)/4;

    printf("The sum of all ages is %i.\n", age_sum);
    printf("The mean of all ages is %i.\n", mean_age);

    return 0; 
}