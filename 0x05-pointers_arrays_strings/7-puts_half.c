#include"main.h"
#include<stdio.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 *@str: the string printed.
 * Return: Always 0 (success).
 */
void puts_half(char *str)
{
	int count = 0;
	int i, start;
	char *orig = str;

	while (*str != '\0')
	{
		str++;
		count = count + 1;
	}
	str = orig;
	if (count % 2 == 0)
	{
		start = count / 2;
		for (i = start; i < count; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
	else
	{
		start = (count - 1) / 2;
		for (i = start; i < count; i++)
		{
			_putchar(*(str + i));

		}
	_putchar('\n');
	}
}
