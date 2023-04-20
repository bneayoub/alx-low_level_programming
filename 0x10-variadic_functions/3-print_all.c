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
	va_list args;
	int i = 0;
	const char *str;
	char current;
	int should_print_comma;

	va_start(args, format);

	while (format[i])
	{
		current = format[i];
		should_print_comma = 1;

		switch (current)
		{
		case 'c':
			printf("%c", (char)va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, const char *);
			printf("%s", str ? str : "(nil)");
			break;
		default:
			should_print_comma = 0;
		}

		i++;

		if (format[i] && should_print_comma)
			printf(", ");
	}

	printf("\n");
	va_end(args);
}
