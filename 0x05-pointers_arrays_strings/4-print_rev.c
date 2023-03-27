#include "main.h"
/**
 * print_rev - check the code
 * @s: pointer to string
 * Return: string in reverse \n.
 */
void print_rev(char *s)
{
	int len;
	len = _strlen(*s);

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
