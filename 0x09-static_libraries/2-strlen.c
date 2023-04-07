/**
 * _strlen - check the code
 * @s: pointer to string
 * Return: len.
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
