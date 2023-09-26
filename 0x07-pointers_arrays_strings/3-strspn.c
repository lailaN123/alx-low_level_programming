#include"main.h"
#include<stdio.h>
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
char *ac;
int count;
while (*s != '\0')
{
	ac = accept;
	count = 0;

	while (*ac != '\0')
	{
		if (*ac == *s)
		{
			count = 1;
			break;
		}
		ac++;
	}
if (count != 0)
{
	s++;
	n++;
}
else
{
	break;
}
}
return (n);
}
