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
	char *duplicated;
	int i, len = 0;
	char *temp = str;

	if (str == NULL)
		return (NULL);

	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	duplicated = malloc((len + 1) * sizeof(char));

	if (duplicated == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		duplicated[i] = str[i];
	}
	duplicated[len] = '\0';
	return (duplicated);
}
