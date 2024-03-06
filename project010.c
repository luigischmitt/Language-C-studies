#include <stdio.h>

// Fatorial Number (ex: 5! = 5*4*3*2*1)
int main()
{
    int number;
    printf ("Type a number: ");
    scanf ("%i", &number);
    int fatorial = number;
    int result = 1;
    
    while (number >= 1) {
        result = result * number; 
        --number;
    }

    printf ("The fatorial of %i is %i", fatorial, result);

    return 0;
}