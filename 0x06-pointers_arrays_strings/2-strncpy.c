#include"main.h"
#include<stdio.h>
/**
 * _strncpy - function that copies a string
 * @dest: string to copy
 * @src: string copied
 * @n: number of characters
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int count1 = 0;
int count2 = 0;
int i;
char *orig1 = src;
char *orig2 = dest;

while (*src != '\0')
{
src++;
count1++;
}
while (*dest != '\0')
{
dest++;
count2++;
}
src = orig1;
dest = orig2;
for (i = 0; i < n; i++)
{
*dest = *src;
src++;
dest++;
}
dest = orig2;
return (dest);
}

