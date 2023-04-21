#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum all arguments together
 *
 * @n: number of args
 *
 * Return: total of addition
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);
	return (sum);
}
