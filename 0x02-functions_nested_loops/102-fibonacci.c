#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int fib1, fib2;
	long long int U;
	int i;

fib1 = 1;
fib2 = 2;
printf("%llu, ", fib1);
printf("%llu, ", fib2);
for (i = 2; i <= 49; i++)
{
	U = fib1 + fib2;
	fib1 = fib2;
	fib2 = U;
	if (i < 49)
	printf("%llu, ", U);
	else
	printf("%llu", U);
}
return (0);
}
