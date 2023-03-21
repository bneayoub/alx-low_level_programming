#include "main.h"

/**
 * printnumber - prints number
 * @n: number to print
 * Return: void
 */

void printnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
		printnumber(n);
	}
	else if (n >= 10)
	{
		printnumber(n / 10);
		printnumber(n % 10);
	}
	else
	{
		_putchar(n + '0');
	}
}

/**
 * print_times_table - prints number multiplication table
 * @n: n the number of multiplication columns
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
				printnumber(num);
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
