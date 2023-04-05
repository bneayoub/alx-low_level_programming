/**
 * _pow_recursion - counts number ^ another
 * using recursion
 *
 * @x: the number
 * @y: its power
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
