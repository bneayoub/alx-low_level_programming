#include "main.h"
/**
 * _puts - check the code
 * @str: pointer to string
 * Return: string \n.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
