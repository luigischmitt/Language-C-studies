#include <stdio.h>

// Studying scanf function
int main()
{
    int base;
    int height;
    int area;

    printf ("Type the base value:\n");    // output command
    scanf ("%i", &base);                  // input command

    printf ("Type the height value:\n");
    scanf ("%i", &height);

    area = base * height;
    printf ("The area of this figure is %i\n", area); 

    return 0;
}