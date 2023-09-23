#include"main.h"
#include<stdio.h>
/**
 * rev_string - reverses a string.
 *@s: the string printed.
 * Return: Always 0 (success).
 */
void rev_string(char *s)
{
	char *start = s;
	char *end;
	int count = 0;
	char rev;


	while (*s != '\0')
	{
		s++;
		count++;
	}
	s--;
	end = s;
	s = start;
	while (start < end)
	{
		rev = *end;
		*end = *start;
		*start = rev;
		end--;
		start++;
	}
}
