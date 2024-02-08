#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: pointer to the searched arr
 * @size: size of the arr
 * @value: searched value
 * Return: The index where the value is located, or -1
*/


int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
