#include"main.h"
#include<stdio.h>
/**
 * *_strcpy - copies the string pointed to by src
 *  including the terminating null byte (\0)
 *  to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int i;
	char *orig = src;

	while (*src != '\0')
	{
		src++;
		count++;
	}
	src = orig;

	for (i = 0; i <= count; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	dest = orig;
	return (dest);
}
