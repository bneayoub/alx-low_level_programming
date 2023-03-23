#include "main.h"
/**
 * print_triangle - prints triangle shape
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1;
	int j = size - 1;
	int filler = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (i <= size)
	{
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		while (filler > 0)
		{
			_putchar('#');
			filler--;
		}
		_putchar('\n');
		i++;
		j = size - i;
		filler = i;
	}
}
