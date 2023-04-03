/**
 * _memset - copies the character b to the first n character
 * to the string pointed to it
 *
 * @s: string destination
 * @b: constant character to copy
 * @n: number of times to copy b into s
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
