/**
 * check_divisibility_recursion - helps find if n has a factor or not
 * using recursion
 *
 * @n: the number n to check
 * @i: number in range [0,n] to find
 * if its a factor of n or not
 *
 * Return: 0 if n has a divisible number
 * 1 otherwise if it has no factor
 */
int check_divisibility_recursion(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_divisibility_recursion(n, i - 1));
}

/**
 * is_prime_number - checkes if number is prime or not
 * using recursion
 *
 * @n: the number n to check if prilme or not
 *
 * Return: 0 if not prime
 * 1 if prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_divisibility_recursion(n, n - 1));
}
