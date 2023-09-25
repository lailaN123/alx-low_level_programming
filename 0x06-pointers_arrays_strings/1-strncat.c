#include"main.h"
#include<stdio.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: string to  print
 * @src: string to take from
 * @n: number of characters  to take from src
 *
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int count1 = 0;
int count3, i;
char *orig2 = dest;

while (*dest != 0)
{
dest++;
count1++;
}
count3 = count1 + n;
for (i = count1; i < count3 && *src != 0; i++)
{
*dest = *src;
src++;
dest++;
}

*dest = '\0';
dest = orig2;
return (dest);
}
