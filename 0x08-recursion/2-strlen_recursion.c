#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s != '\0')
	{
		c++;
		c = c +  _strlen_recursion(s + 1);
	}
	return (c);
}
