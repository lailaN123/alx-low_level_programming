#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int c1 = 0;
	int c2 = 0;
	char *orig1 = s1;
	char *orig2 = s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
	{
		s1++;
		c1++;
	}
	while (*s2 != '\0')
	{
		s2++;
		c2++;
	}
	s1 = orig1;
	s2 = orig2;
	char *str = malloc(sizeof(char) * (c1 + c2 + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < c1; i++)
	{
		*(str + i) = *(s1 + i);
	}
	for (i = 0; i <= c2; i++)
	{
	*(str + c1 + i) = *(s2 + i);
	}
	return (str);
}
