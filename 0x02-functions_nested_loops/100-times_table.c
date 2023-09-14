#include"main.h"
#include<stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number input.
 * Return: 0 always (success)
 */
void print_times_table(int n)
{
	int i, j, m, q;
if ((n < 15) && (n >= 0))
{
for (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
	{
		m = i * j;
		if (j == 0)
		{
			_putchar('0');
		}
		else if (m <= 9)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(m + '0');
		}
		else if (m <= 99)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
		else if (m >= 100)
		{
			q = m / 10;
			_putchar(' ');
			_putchar(q / 10 + '0');
			_putchar(q % 10 + '0');
			_putchar(m % 10 + '0');
		}

		if (j < n)
		_putchar(',');
		else
		_putchar('\n');
	}
}
}
}
