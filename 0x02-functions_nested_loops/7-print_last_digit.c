#include "main.h"
/**
 * print_last_digit - aboslute value
 * @n: the number to calculates
 * Return: 0
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
	{
		a = -1 * a;
	}
	_putchar('0' + a);
	return (a);
}
