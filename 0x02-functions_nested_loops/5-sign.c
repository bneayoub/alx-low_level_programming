#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints sign of it.
 * @n: the number to be checked
 *
 * Return: 0,1, or -1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
