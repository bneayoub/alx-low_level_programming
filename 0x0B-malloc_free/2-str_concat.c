#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 *
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 *
 * Return: return 2 strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i, len_s1 = 0, len_s2 = 0;
	char *temp1 = s1, *temp2 = s2, *concatenated;

	if (s1 != NULL)
	{
		while (*temp1 != '\0')
		{
			len_s1++;
			temp1++;
		}
	}
	if (s2 != NULL)
	{
		while (*temp2 != '\0')
		{
			len_s2++;
			temp2++;
		}
	}
	concatenated = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len_s1 + len_s2; i++)
	{
		if (i < len_s1)
		{
			concatenated[i] = (s1 == NULL) ? '\0' : s1[i];
		}
		else if (s2 != NULL)
		{
			concatenated[i] = s2[i - len_s1];
		}
	}
	concatenated[len_s1 + len_s2] = '\0';
	return (concatenated);
}
