#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(ptr + i) = c;
		}
		return (ptr);
	}
}
