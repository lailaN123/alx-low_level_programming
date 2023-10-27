#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number or
 * 0 if there is one or more chars in the string b
 * that is not 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}
