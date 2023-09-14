#include <stdio.h>
/**
 * main -  prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long fib1, fib2, U;
    int i;

    fib1 = 1;
    fib2 = 2;

    printf("%lu", fib1);

    for (i = 2; i <= 97; i++)
    {
        U = fib1 + fib2;
        fib1 = fib2;
        fib2 = U;

        printf(", %lu", U);
    }

    printf("\n");

    return (0);
}

