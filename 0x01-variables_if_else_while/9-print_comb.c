#include<stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
