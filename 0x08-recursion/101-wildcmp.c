/**
 * wildcmp - helps comparing 2 strings
 * using recursion
 *
 * @s1: string 2 to compare
 * @s2: string 2 to compare
 *
 * Return: 0 if *s1 and *s2 are different
 * 1 if *s1 and *s2 can be considered identical
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else
	{
		return (0);
	}
}
