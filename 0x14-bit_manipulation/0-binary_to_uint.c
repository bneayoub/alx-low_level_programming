#include "main.h"
/**
 * binary_to_uint - Converts a binary to an unsigned int
 *
 * @b: binary number to convert
 *
 * Return: the conversion or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		result <<= 1;
		result += b[len] - '0';
		len++;
	}
	return (result);
}
