#include<stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i <= 57; i++)
{
	for (j = 48; j <= 57; j++)
	{
		if (i != j && i < j)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
