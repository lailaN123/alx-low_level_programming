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
int count3, i;
char *orig1 = src;
char *orig2 = dest;

while (*dest != 0)
{
dest++;
count1++;
}
while (*src != 0)
{
src++;
count2++;
}

src = orig1;
count3 = count1 + count2;
for (i = count3 - count1; i < count1 + n && *src != 0; i++)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
dest = orig2;
return (dest);
}
