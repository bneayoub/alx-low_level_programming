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

	va_start(args, format);

	while (format[i])
	{
		current = format[i];
		if (current == 'c')
			printf("%c", (char)va_arg(args, int));
		else if (current == 'i')
			printf("%d", va_arg(args, int));
		else if (current == 'f')
			printf("%f", (float)va_arg(args, double));
		else if (current == 's')
		{
			str = va_arg(args, const char *);
			printf("%s", str ? str : "(nil)");
		}

		i++;

		if (format[i] && (current == 'c' || current == 'i' ||
						  current == 'f' || current == 's'))
		{
			printf(", ");
		}
	}

	printf("\n");
	va_end(args);
}
