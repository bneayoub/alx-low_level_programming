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
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
