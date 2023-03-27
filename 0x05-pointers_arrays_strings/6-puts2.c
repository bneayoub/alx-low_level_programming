#include "main.h"
/**
 * puts2 - check the code
 * @str: pointer to string
 * Return: string even indexes\n.
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
