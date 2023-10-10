#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i;
	int count = 0;
	char *s;
	char *orig1 = str;
	char *orig2;

	while (*str != '\0')
	{
		str++;
		count++;
	}
	str = orig1;
	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(count * sizeof(char) + 1);
	orig2 = s;
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		*(s + i) = *(str + i);
	}
	s = orig2;
	return (s);
}
