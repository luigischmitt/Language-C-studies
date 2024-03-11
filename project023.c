#include <stdio.h>

// Studying about Multidimensional arrays
int main(void)
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    // Loop through rows
    for (int i = 0; i < 3; i++) 
    {   // Loop through colums
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", matrix[i][j]);
        }
        printf("\n"); // Move to the next row
    }
    
    return 0;
}