#include "main.h"
/**
 * print_number - prints an integer
 * @n: string to print
 * Return: void
 */
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / div >= 10)
	{
		div *= 10;
	}
	while (div != 0)
	{
		int digit = n / div;

		_putchar(digit + '0');
		n %= div;
		div /= 10;
	}
}
