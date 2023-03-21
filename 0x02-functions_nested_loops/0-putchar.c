#include "main.h"

/**
 * main - Entry point
 *
 * Return: - Always 0 (Success)
 */

int main(void)
{
	char write[8] = "_putchar";
	int i;

	i = 0;
	while (i <= 7)
	{
		_putchar(write[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}