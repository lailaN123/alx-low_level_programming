#include"main.h"
#include<stdio.h>

/**
 * _strlen - returns the length of a string.
 *@s: strinng to check.
 * Return: returns the length of string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count = count + 1;
	}
return (count);
}
