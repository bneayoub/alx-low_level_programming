/**
 * factorial - counts factorial of a number
 * using recursion
 *
 * @n: int to count factorial for
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
