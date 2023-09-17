#include<stdio.h>
#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 *@n: the number of times the character \ should be printed.
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int i, j;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			_putchar(92);
			else
			_putchar(' ');
		}
		_putchar('\n');
	}
}
}
