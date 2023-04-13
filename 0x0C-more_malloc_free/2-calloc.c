#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Write a function that allocates memory
 * for an array, using malloc
 *
 * @nmemb: number of elements of the array
 * @size: size of the array
 *
 * Return: array using malloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array_malloc = malloc(nmemb * size);

	if (nmemb == 0 || array_malloc == NULL)
		return (NULL);

	return (array_malloc);
}
