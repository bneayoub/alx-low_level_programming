#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array with char c in it
 *
 * @size: size of our array
 * @c: char to use for filling
 *
 * Return: created char array
 */
char *create_array(unsigned int size, char c)
{
	char *array_created = malloc(size * sizeof(c));
	unsigned int i = 0;

	if (size == 0 || array_created == NULL)
		return (NULL);

	while (i < size * sizeof(c))
	{
		array_created[i] = c;
		i++;
	}

	return (array_created);
}
