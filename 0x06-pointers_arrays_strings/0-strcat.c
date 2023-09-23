#include<stdio.h>
#include"main.h"
/**
 * *_strcat - appends the src string to the dest string
 *  overwriting the terminating null byte (\0) at the end of dest
 *  and then adds a terminating null byte
 * @dest: function that take the string fromp src
 * @src: function that appends to src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int count1 = 0;
	int count2 = 0;
	int count3;
	char *orig1 = src;
	char *orig2 = dest;

	while (*dest != '\0')
	{
		dest++;
		count2++;
	}

	while (*src != '\0')
	{
		src++;
		count1++;
	}
	count3 = count1 + count2;
	src = orig1;
	for (i = count3 - count1; i <= count3; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	dest = orig2;
	return (dest);
}
