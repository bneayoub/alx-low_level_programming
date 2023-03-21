#include <stdio.h>
/**
 * main - prints 98 first fibos
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, c, n, m, x, y;

	b = 1;
	c = 2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}

	n = b / 1000000000;
	m = b % 1000000000;
	x = c / 1000000000;
	y = c % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", x + (y / 1000000000));
		printf("%lu", y % 1000000000);
		x = x + n;
		n = x - n;
		y = y + m;
		m = y - m;
	}

	printf("\n");

	return (0);
}
