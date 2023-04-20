#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print args strs separated by a delimiter
 *
 * @separator: the delimiter
 * @n: number of numbers
 *
 * Return: void and prints numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
