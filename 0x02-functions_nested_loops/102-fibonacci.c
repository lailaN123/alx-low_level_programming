#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1, fib2;
	unsigned long U;
	int i;

fib1 = 0;
fib2 = 1;
for (i = 0; i <= 49; i++)
{
	U = fib1 + fib2;
	fib1 = fib2;
	fib2 = U;
	if (i < 49)
	printf("%lu, ", U);
	else
	printf("%lu ", U);
}
return (0);
}
