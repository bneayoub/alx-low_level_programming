#include "main.h"
/**
 * _islower - ASCII range  97-122 / 65-90
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
