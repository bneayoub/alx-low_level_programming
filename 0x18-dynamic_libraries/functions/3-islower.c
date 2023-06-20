#include "main.h"

/**
 * _islower - Entry point
 * @c: input char
 * Description: checks if char isLower
 * Return: 1 if is lowercase else 0
 */

int _islower(int c)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s == c)
			return (1);
	}
	return (0);
}
