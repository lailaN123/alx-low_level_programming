#include"main.h"
#include<stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements of the array
 * Return: Always 0 (success).
 */
void print_array(int *a, int n)
{
int i;

	for (i = 0; i < n; i++)
	{
	if (n == 1)
	{
		printf("%d\n", a[i]);
	}
	else
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
	}
}

