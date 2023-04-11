#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string source, in a string target
 *
 * @str: string to duplicate
 *
 * Return: return duplicate string
 */
char *_strdup(char *str)
{
	char *duplicated = malloc(sizeof(str));
	int i;

	if (duplicated == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		duplicated[i] = str[i];
	}

	return (duplicated);
}
