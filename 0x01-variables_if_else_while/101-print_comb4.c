#include<stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, e;
for (i = 48; i <= 57; i++)
{
	for (j = 48; j <= 57; j++)
	{
		for (e = 48; e <= 57; e++)
		{
			if (i < j && j < e)
			{
				putchar(i);
				putchar(j);
				putchar(e);
				if (i != 55 || j != 56 || e != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
