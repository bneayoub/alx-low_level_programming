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
	int len_s = 0, i;
	char *str_dest;

	while (*(s + len_s) != '\0')
	{
		len_s++;
	}

	for (i = 0; i < len_s; i++)
	{
		if (*(s + i) == c)
		{
			str_dest = s + i;
			return (str_dest);
		}
	}

	return (NULL);
}
