/**
 * _memset - copies the character b to the first n character
 * to the string pointed to it
 *
 * @s: first number to add
 * @b: second number to add
 * @n: buffer to store result
 *
 * Return: pointer to result buffer, or 0 if result can't be stored
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
