#include "main.h"
/**
 * _abs - aboslute value
 * @n: the number to calculates
 * Description: Longer description of the function)?
(* section header: Section description)*
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