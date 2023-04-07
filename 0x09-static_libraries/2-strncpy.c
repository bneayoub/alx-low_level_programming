/**
 * *_strncpy - copy a string
 * @dest: string 1
 * @src: string 2
 * @n: index where to start copying
 * Return: string in reverse
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
