/**
 * _memcpy - copies the n bytes first characters
 * from src into dest
 *
 * @dest: string destination
 * @src: string to copy from
 * @n: bytes to copy from src to dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
