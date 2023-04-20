#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print args c,s,i,e,f... separated by a comma
 *
 * @format: arg types in string
 *
 * Return: void and prints all
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	const char *str;
	const char *sep = "";

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, const char *);
			printf("%s%s", sep, str ? str : "(nil)");
			break;
		default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
