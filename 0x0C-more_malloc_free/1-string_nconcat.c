#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -function that concatenates two strings
 * using only n bytes from second string
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from s2
 *
 * Return: concatenation or NULL depending on input
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = s1 == NULL ? 0 : strlen(s1);
	unsigned int s2_len = s2 == NULL ? 0 : strlen(s2);
	char *str;
	unsigned int i;

	if (n > s2_len)
		n = s2_len;

	str = malloc((s1_len + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_len + n; i++)
	{
		if (i < s1_len)
			str[i] = s1[i];
		else
			str[i] = s2[i - s1_len];
	}
	str[s1_len + n] = '\0';

	return (str);
}
