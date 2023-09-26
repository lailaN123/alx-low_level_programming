#include"main.h"
#include<stdio.h>
/**
 * _memset - fill memory with a specific value
 * @s: pointer
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int count = 0;
int i;
char *orig = s;

while (*s != '\0')
{
s++;
count++;
}
s = orig;
for (i = 0; i < n; i++)
{
*s = b;
s++;
}
s = orig;
return (s);
}
