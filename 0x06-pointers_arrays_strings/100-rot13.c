/**
 * *rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: encoded
 */
char *rot13(char *str)
{
	char *result = str;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				result[i] = rot13[j];
				break;
			}
		}
	}

	return (result);
}
