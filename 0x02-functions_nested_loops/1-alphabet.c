#include"main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
