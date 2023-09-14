#include <stdio.h>

int main(void)
{
    unsigned long fib1, fib2, U;
    int i;

    fib1 = 1;
    fib2 = 2;

    printf("%lu", fib1); // Print the first number without a comma

    for (i = 2; i <= 97; i++)
    {
        U = fib1 + fib2;
        fib1 = fib2;
        fib2 = U;

        printf(", %lu", U); // Print a comma followed by the number
    }

    printf("\n");

    return (0);
}

