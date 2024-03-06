#include <stdio.h>

// Learning about do while
int main()
{
    int i = 0;

    while (i != 0) {
        printf("Example\n");
    }

    do {                            // Do while executes the command at least once
        printf("Example 2\n"); 
    } while (i != 0);

    return 0;
}