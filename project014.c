#include <stdio.h>

int main()
{
    int i;

    printf("Type a number between 1 to 5: ");
    scanf("%i", &i);

    switch (i) {
    case 1:
        printf("First\n");
        break;
    case 2:
        printf("Second\n");        
        break;
    case 3:
        printf("Third\n");
        break;
    case 4:
        printf("Forth\n\n");
        break;
    case 5:
        printf("Fifth\n");        
        break;
    default:
        printf("Invalid Option!\n");
        break;
    }

    return 0;
}