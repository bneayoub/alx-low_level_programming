/**
 * _strpbrk -  searches a string for any of a set of characters.
 * It returns a pointer to the first occurrence in the string of any
 * of the characters specified in the accept argument.
 *
 * @s: string to be searched
 * @accept: string containing the chars to search for
 *
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}

		i++;
		j = 0;
	}
	return (0);
}
