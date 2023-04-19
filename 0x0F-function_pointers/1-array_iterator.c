#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function executing a function
 *
 * @array: array of params
 * @size: size of array
 * @action: pointer to function
 *
 * Return : void, executes function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
