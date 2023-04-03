/**
 * _strstr - searches for the first occurrence of a substring
 * within a larger string.
 *
 * @haystack: string to search
 * @needle: substring to search for within haystack
 * are allowed in the given tring
 *
 * Return: a pointer to the first occurrence of the substring if it
 * is found, and a null pointer otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int len_needle = 0, occurence = 0;

	while (*(needle + len_needle) != '\0')
	{
		len_needle++;
	}

	while (*haystack != '\0' && *needle != '\0')
	{
		if (*haystack != *needle)
		{
			needle -= occurence;
			haystack -= (occurence - 1);
			occurence = 0;
			continue;
		}
		haystack++;
		needle++;
		occurence++;
		if (occurence == len_needle)
			break;
	}
	if (occurence == len_needle)
		return (haystack - occurence);
	return (0);
}
