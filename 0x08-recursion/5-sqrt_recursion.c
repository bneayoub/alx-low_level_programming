/**
 * find_sqrt - helps find if n have naturale square or not
 * using recursion
 *
 * @n: the number n to look for its square root
 * @i: is donna be our number in range [0,n] to check
 * if n has a square root or not
 *
 * Return: -1 if n doesnt have a square root
 * returns the quare root otherwise
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (find_sqrt(n, i + 1));
	}
}

/**
 * _sqrt_recursion - natural square root of a number
 *
 * @n: the number n to look for its square root
 *
 * Return: -1 or square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}
