#include<stdio.h>
/**
 * main -  prints the sum of the even-valued terms, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1, fib2;
	unsigned long U, s;

fib1 = 1;
fib2 = 2;
s = 2;
do {
	U = fib1 + fib2;
	fib1 = fib2;
	fib2 = U;
	if (U % 2 == 0)
	s = s + U;
} while (U < 4000000);
printf("%d\n", s);
return (0);
}
