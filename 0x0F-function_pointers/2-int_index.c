#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function searching for int and returns its index
 *
 * @array: array holding params
 * @size: size of array
 * @cmp: pointer to function comparing values
 *
 * Return: -1 if conditions not met
 * Otherwize index of 1st matching element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		{
		if (cmp(array[i]) != 0)
			return (i);
		}

	return (-1);
}
