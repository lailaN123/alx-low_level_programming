#include"main.h"
#include<stdio.h>
/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59.
 * Return: 0 always (success)
 */
void jack_bauer(void)
{
	int h, m;

for (h = 0; h <= 23; h++)
{
	for (m = 0; m <= 59; m++)
	{
	printf("%02d:%02d", h, m);
	printf("\n");
	}
}
}
