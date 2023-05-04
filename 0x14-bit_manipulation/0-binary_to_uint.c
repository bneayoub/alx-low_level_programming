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
	size_t i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			result = (result << 1) | (b[i] == '1');
		else
			return (0);
	}

	return (result);
}
