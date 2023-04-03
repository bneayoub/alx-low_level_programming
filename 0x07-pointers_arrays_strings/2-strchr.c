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
	int i=0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
