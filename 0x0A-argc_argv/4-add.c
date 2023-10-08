#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *s;

	if (argc < 3)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			while (*s != '\0')
			{
				if (*s < '0' || *s > '9')
				{
					printf("Error\n");
					return (1);
				}
			s++;
			}
		sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
