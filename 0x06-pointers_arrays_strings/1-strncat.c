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
int count2 = 0;
char *orig2 = dest;

while (*dest != '\0')
{
dest++;
count1++;
}
while (count2 < n && *src != '\0')
{
*dest = *src;
src++;
dest++;
count2++;
}
dest = orig2;
return (dest);
}

