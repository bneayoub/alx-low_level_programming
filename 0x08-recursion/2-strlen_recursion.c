/**
 * _strlen_recursion - calculate str length
 * using recursion
 *
 * @s: string to count len
 *
 * Return: int length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
