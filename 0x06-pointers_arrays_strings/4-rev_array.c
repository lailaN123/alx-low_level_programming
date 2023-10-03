#include<stdio.h>
#include"main.h"
/**
 * reverse_array -reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return: always 0 (success)
 */
void reverse_array(int *a, int n)
{
int i, rev;

for (i = 0; i < n / 2; i++)
{
	rev = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = rev;
}
}
