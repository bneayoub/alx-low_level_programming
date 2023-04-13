#include <stdlib.h>
/**
 * malloc_checked -Write a function that allocates
 * memory using malloc
 *
 * @b: size of malloc in bytes
 *
 * Return: created char array
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
