#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char Char;
int Int;
long int Lint;
float Float;
long long int Llint;
printf("Size of a char: %zu byte(s)\n", sizeof(Char));
printf("Size of an int: %zu byte(s)\n", sizeof(Int));
printf("Size of a long int: %zu byte(s)\n", sizeof(Lint));
printf("Size of a long long int: %zu byte(s)\n", sizeof(Llint));
printf("Size of a float: %zu byte(s)\n", sizeof(Float));
return (0);
}
