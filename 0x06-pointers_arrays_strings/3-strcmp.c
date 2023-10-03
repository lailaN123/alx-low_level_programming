#include<stdio.h>
#include"main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: a string
 */
int _strcmp(char *s1, char *s2)
{

while (*s1 != '\0')
{
	while (*s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			s1++;
			s2++;
		}
	}
}
return (0);
}
