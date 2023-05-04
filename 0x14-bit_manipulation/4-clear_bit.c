#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: Pointer to the number where the bit should be cleared.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	/* Set the value of the bit at the given index to 0 */
	*n &= ~(1UL << index);

	return (1);
}
