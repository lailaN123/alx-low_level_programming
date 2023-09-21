#include"main.h"
#include<stdio.h>
/**
 * puts2 - prints every other character of a string.
 *@str: the string printed.
 * Return: Always 0 (success).
 */
void puts2(char *str)
{
	int count = 0;
	int i;
	char *orig = str;

	while (*str != '\0')
	{
		str++;
		count = count + 1;
	}
	str = orig;
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
		{
			putchar(*str);
		}
	str++;
	}
}
