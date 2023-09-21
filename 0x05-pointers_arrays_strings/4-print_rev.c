#include<stdio.h>
#include<stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *@str: the string printed.
 * Return: Always 0 (success).
 */
void print_rev(char *s)
{       
	int count = 0;
	int i;
 
	while (*s != '\0')
	{
		s++;
		count = count + 1;
	}
	s--;
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
