#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_numbers - print args nums separated by a delimiter
 *
 * @separator: the delimiter
 * @n: number of numbers
 *
 * Return: void and prints numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(args);
}
