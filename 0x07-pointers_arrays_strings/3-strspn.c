/**
 * _strspn - searches for the first occurence
 * of the character c in the string s
 *
 * @s: string to be checked
 * @accept: set of chars that
 * are allowed in the given tring
 *
 * Return: pointer to s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int pre_length = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				pre_length++;
				j = 0;
				i++;
			}
			else
				j++;
		}
		break;
	}

	return (pre_length);
}
