#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 *
 * @n: The number to retrieve the bit from
 * @index: The index of the bit to get, starting from 0
 *
 * Return: The value of the bit at index "index" or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-1);
	}

	/* Retrieve the value of the bit at the given index */
	bit_value = (n >> index) & 1;

	return (bit_value);
}
