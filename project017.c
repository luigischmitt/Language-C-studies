#include <stdio.h>

// Learning how to use "? :"
int main() 
{
    int num1 = 10;
    int num2 = 20;
    int answer;

    num1 < num2 ? printf("yes\n") : printf("no\n");
    num1 < num2 ? (answer = 10) : (answer = -10);

    printf("%i", answer);

    return 0; 
}