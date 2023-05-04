#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int highest_bit = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	/* Find the position of the highest bit set to 1 */
	while (highest_bit <= (n >> 1))
	{
		highest_bit <<= 1;
	}

	/* Print the binary representation */
	while (highest_bit > 0)
	{
		if (n & highest_bit)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		highest_bit >>= 1;
	}
}
