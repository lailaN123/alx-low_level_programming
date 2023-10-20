#include <stdio.h>

void poem(void) __attribute__ ((constructor));

/**
 * poem - prints a sentence before the main
 * function is executed
 */
void poem(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

