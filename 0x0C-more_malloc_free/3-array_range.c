#include <stdlib.h>
/**
 * array_range - array of integers from min to max
 *
 * @min: start range of the array
 * @max: finsih range of the array
 *
 * Return: array ranged from min to max
 */
int *array_range(int min, int max)
{
	int *array_range;
	int i;

	array_range = malloc((max - min + 1) * sizeof(int));
	if (array_range == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
	{
		array_range[i] = i + min;
	}

	return (array_range);
}
