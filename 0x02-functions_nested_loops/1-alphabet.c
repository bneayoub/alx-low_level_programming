#include "main.h"
/**
 * main - _putchar alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');
}
