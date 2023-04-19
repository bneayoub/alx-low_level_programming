#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its opcodes
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int number_of_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *byte_ptr = (unsigned char *)main;

	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", byte_ptr[i]);

		if (i != number_of_bytes - 1)
		{
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
