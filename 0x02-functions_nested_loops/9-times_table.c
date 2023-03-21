#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * times_table - aboslute value
 * Return: 0
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", i * j);
			fflush(stdout);
			if (i * j == (i * j) % 10 && i * (j + 1) == (i * (j + 1)) % 10 && j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
