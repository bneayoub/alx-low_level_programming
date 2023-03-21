#include "main.h"
/**
 * jack_bauer - aboslute value
 * Return: 0
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 23; i++)
	{
		int s = i / 10;

		for (j = 0; j <= 59; j++)
		{
			int k = j / 10;

			_putchar(s % 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(k % 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
