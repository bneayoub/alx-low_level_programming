#include <stdlib.h>
/**
 * _strchr - searches for the first occurence
 * of the character c in the string s
 *
 * @s: string to look for c within
 * @c: character to look for
 *
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
