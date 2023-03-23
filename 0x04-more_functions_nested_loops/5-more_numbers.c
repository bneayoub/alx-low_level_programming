#include "main.h"
/**
 * more_numbers - prints 0..14 x10
 * Return: voide
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}

			_putchar(i % 10 + '0');
		}
		j++;
		_putchar('\n');
	}
}
