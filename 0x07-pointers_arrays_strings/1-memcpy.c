#include <stdio.h>
#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory area
 *@src: source
 *@n: number of bytes
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *orig = dest;
for (i = 0; i < n; i++)
{
*dest = *src;
dest++;
src++;
}
dest = orig;
return (dest);
}
