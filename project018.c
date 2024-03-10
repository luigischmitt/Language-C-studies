#include <stdio.h>
#include <stdbool.h>

// C Data Types:
int main()
{
    // 1. CHAR
    char variable_char = 'a';
    printf("%c\n", variable_char);
    scanf("%c", &variable_char);
    printf("%c\n", variable_char);

    // 2. BOOL
    bool variable_bool = true;
    printf("%i", variable_bool);

    // 3. INT, LONG INT and CONST INT
    int variable_int = 10;
    printf("%i",variable_int);
    scanf("%i", &variable_int);
    printf("%i", variable_int);

    // 4. FLOAT
    float variable_float = 5.5;
    printf("%f", variable_float);
    scanf("%f", &variable_float);
    printf("%f", variable_float);

    // 5. DOUBLE (double precision - float)
    double variable_double = 3413423.3213;
    printf("%d", variable_double);
    scanf("%d", &variable_double);
    printf("%d", variable_double);

    return 0;
}