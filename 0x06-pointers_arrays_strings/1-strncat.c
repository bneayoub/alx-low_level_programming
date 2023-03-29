/**
 * *_strncat - concatenate two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 * Return: string in reverse \n.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len])
		dest_len++;
	dest[dest_len] = ' ';
	while (src[i] && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
