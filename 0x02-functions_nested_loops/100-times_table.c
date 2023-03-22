#include "main.h"

/**
 * prints_ncol - prints number
 * @n: number to print
 * Return: void
 */

void prints_ncol(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
		prints_ncol(n);
	}
	else if (n >= 10)
	{
		prints_ncol(n / 10);
		prints_ncol(n % 10);
	}
	else
	{
		_putchar(n + '0');
	}
}

/**
 * print_times_table - Table of multiplication
 * @n: the number of mults
 */

void print_times_table(int n)
{
	int i = 0;
	int j;
	int num = 0;

	if (n >= 0 && n < 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j < (n + 1))
			{
				num = i * j;
				prints_ncol(num);
				if (j < n && i * (j + 1) < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (j < n && i * (j + 1) >= 100)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if (j < n && i * (j + 1) >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
