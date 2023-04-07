/**
 * _isupper - ASCII range  97-122 / 65-90
 * @c: the char to evaluate
 * Return: 0 , 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
