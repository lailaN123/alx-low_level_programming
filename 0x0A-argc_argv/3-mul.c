#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc < 3)
	{
		printf("error\n");
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
