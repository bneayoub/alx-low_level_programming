#include "main.h"

/**
 * _isalpha - Entry point
 * @c: input char
 * Description: check for alphabets
 * Return: 1 if alphabets 0 otherwise
 */

int _isalpha(int c)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (c == s)
			return (1);
	}

	for (s = 'A'; s <= 'Z'; s++)
	{
		if (c == s)
			return (1);
	}

	return (0);
}
