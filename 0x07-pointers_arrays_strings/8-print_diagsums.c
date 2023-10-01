#include<stdio.h>
#include"main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: 2d array of int types.
 * @size: size of array (square)
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int i;
int s1 = 0;
int s2 = 0;

for (i = 0; i < size; i++)
{
	s1 = s1 + a[i * size + i];
	s2 = s2 + a[i * size + (size - i - 1)];
}
printf("%d, ", s1);
printf("%d\n", s2);
}
