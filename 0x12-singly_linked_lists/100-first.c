#include <stdio.h>

void pioneer(void) __attribute__ ((constructor));

/**
 * pioneer - prints sentence before main is executed
 *
 * Return: void & prints sentence
 */
void pioneer(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
