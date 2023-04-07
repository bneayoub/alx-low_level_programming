/**
 * _isalpha - ASCII range  97-122 / 65-90
 * @c: the number to be checked
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
