#include "main.h"

/**
  * print_alphabet - prints alphabets
  *
  * Retrun: void
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
