/**
 * _abs - aboslute value
 * @n: the number to be checked
 * Return: 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (0);
	}
}
