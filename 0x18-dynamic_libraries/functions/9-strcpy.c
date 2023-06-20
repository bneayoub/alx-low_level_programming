/**
 * _strcpy - copies a string from one pointer to another
 *	including the terminating null byte (\0)
 *
 * @src: source of string parameter input
 * @dest: destination of string
 *
 * Return: pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
