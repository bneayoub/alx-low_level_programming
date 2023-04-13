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
	char *tmp;
	unsigned int i;

	if (nmemb == 0 || array_malloc == NULL)
		return (NULL);

	tmp = array_malloc;

	for (i = 0; i < (size * nmemb); i++)
		tmp[i] = '\0';

	return (array_malloc);
}
