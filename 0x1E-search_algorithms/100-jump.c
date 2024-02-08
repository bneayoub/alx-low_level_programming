#include "search_algos.h"

/**
 * min - find min of a & b
 * @a: The first value
 * @b: The second value
 * Return: The minimum of the two values
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * _linear_search - Perform linear search on a subarray
 * @array: Pointer to the first element of the subarray
 * @start: Starting index of subarray
 * @end: Ending index of subarray
 * @value: Value to search for
 * Return: The index where value is located or -1 if not found
 */
int _linear_search(int *array, size_t start, size_t end, int value)
{
	size_t i;

	for (i = start; i < end; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

/**
 * jump_search - Jump Search on a sorted array
 * @array: Pointer to the first element
 * @size: Number of elements
 * @value: The value to search for
 * Return: The index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t block_size = sqrt(size);
	size_t prev = 0;
	int idx;

	if (array == NULL)
		return (-1);


	while (array[min(block_size, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = block_size;
		block_size += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	prev, min(block_size, size) - 1);

	idx = _linear_search(array, prev, min(block_size, size), value);
	if (idx != -1)
	{
		printf("Found %d at index: %d\n", value, idx);
		return (idx);
	}
	else
	{
		printf("Found %d at index: -1\n", value);
		return (-1);
	}
}

