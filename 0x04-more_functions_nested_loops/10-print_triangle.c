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

	for (i = 1; i <= size; i++)
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
		j = size - i;
		filler = i;
	}
}
