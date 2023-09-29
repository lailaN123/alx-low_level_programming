#include<stdio.h>
#include"main.h"
/**
 * _strstr - finds the first occur of the substring needle in the haystack.
 * The terminating null bytes (\0) are not compared.
 * @haystack: input
 * @needle: input
 * Return: pointer to the beginning of the located substring.
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *n;
	char *h;

	while (*haystack != '\0')
	{
		n = needle;
		h = haystack;
		while (*n != '\0' && *n == *h)
		{
			h++;
			n++;
		}
		if (*n != '\0')
			return (haystack);
		haystack++;
	}
return (0);
}
