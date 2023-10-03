#include<stdio.h>
#include"main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string to return
 * Return: s
 */
char *string_toupper(char *s)
{
char *orig = s;

while (*s != '\0')
{
	if (*s >= 97 && *s <= 122)
	{
		*s = *s - 32;
	}
s++;
}
s = orig;
return (s);
}
