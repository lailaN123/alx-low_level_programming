#include"main.h"
#include <stdio.h>
/**
 *_islower - checks for lowercase character.
 * @c : the character to check.
 *
 * Return: Returns 1 if c is lowercase
 *	Returns 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
