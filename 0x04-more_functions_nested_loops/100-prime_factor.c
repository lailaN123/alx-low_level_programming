#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0 on success
 */

int main(void)
{
unsigned long n = 612852475143;
unsigned long large_factor = 2;
while (n > large_factor)
{
if (n % large_factor == 0)
{
n = n / large_factor;
}
else
large_factor++;
}
printf("%lu\n", n);
return (0);
}
