#include"main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n: takes in integer type input for the function.
 * Return: Returns the value of the last digit of the input.
 */
int print_last_digit(int n)
{
int last_digit;

if (n >= 0)
{
last_digit = n % 10;
}
else
{
last_digit = -1 * (n % 10);
}
_putchar(last_digit + '0');
return (last_digit);
}
