#include<stdio.h>
#include"main.h"
/**
 *_strpbrk - search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match.
 * Return: pointer to the byte in s that matches one of the bytes in accept.
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
char *ac = accept;

	while (*s != '\0')
	{
		ac = accept;
		while (*ac != '\0')
		{
			if (*ac == *s)
			{
				break;
			}
			else
			{
				ac++;
			}
		}
		if (*ac == *s)
		{
			return (s);
		}
			else
		{
			s++;
		}
	}
return (0);
}
