#include"main.h"
#include <stdio.h>
/**
 * _abs - prints the sign of a number.
 * @n: takes in integer type input for function
 * Return: The absolute value of the input number.
 */
int _abs(int n)
{
if (n > 0)
{

return (n);
}
else if (n == 0)
{
return (0);
}
else
{
return (-n);
}
}
