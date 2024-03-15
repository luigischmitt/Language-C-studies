#include <stdio.h>

// Understading the use of else if
int main()
{
    int age;
    printf("How old are you: ");
    scanf("%i", &age);

    if(age <= 2) 
        printf("Baby\n");
    else if (age > 2 && age <= 11)
        printf("Kid\n");
    else if (age > 11 && age <= 19) 
        printf("Adolescent\n");
    else if (age > 19 && age <= 59)
        printf("Adult\n");
    else 
        printf("Elderly\n");
    
    return 0;
}