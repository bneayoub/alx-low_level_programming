#include "main.h"
/**
 * print_alphabet_x10 - _putchar alphabets
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char character = 'a';

	while (j < 10)
	{
		while (character <= 'z')
		{
			_putchar(character);
			character++;
		}
		_putchar('\n');
		j++;
		character = 'a';
	}
}
