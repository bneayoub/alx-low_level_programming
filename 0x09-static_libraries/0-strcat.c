/**
 * *_strcat - concatenate two strings
 * @dest: string 1
 * @src: string 2
 * Return: string in reverse \n.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len])
		dest_len++;

	while (src[i])
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
