#include "search_algos.h"

/**
 * print_array - Print an array of integers
 * @array: The array to print
 * @size: The size of the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * _advanced_binary - Recursive helper for advanced_binary
 * @array: A pointer to the first element of the array
 * @left: Left boundary for search
 * @right: Right boundary for search
 * @value: The value to search for
 * Return: The index where value is located, or -1
 */
int _advanced_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array + left, right - left + 1);
	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		return (_advanced_binary(array, left, mid - 1, value));
	}

	if (array[mid] < value)
		return (_advanced_binary(array, mid + 1, right, value));
	return (_advanced_binary(array, left, mid - 1, value));
}

/**
 * advanced_binary - Advanced binary search algorithm
 * @array: A pointer to the first element of the array
 * @size: size of the array
 * @value: The value to search for
 * Return: The index where value is located, or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (_advanced_binary(array, 0, size - 1, value));
}
