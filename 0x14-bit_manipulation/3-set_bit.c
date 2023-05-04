#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n: Pointer to the number where the bit should be set.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
	{
		return (-1);
	}

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-1);
	}

	/* Set the value of the bit at the given index to 1 */
	*n |= (1UL << index);

	return (1);
}
