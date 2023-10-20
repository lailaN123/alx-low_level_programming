#include "main.h"

int check(char *s, int n, int length);
int _strlen_recurs(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is a palindrome, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen_recurs(s)));
}

/**
 * _strlen_recurs - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recurs(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recurs(s + 1));
}

/**
 * check - checks the characters recursively
 * @s: string to check
 * @n: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check(char *s, int n, int length)
{
	if (n >= length)
		return (1);
	if (*(s + length - 1) != *(s + n))
		return (0);
	return (check(s, n + 1, length - 1));
}
