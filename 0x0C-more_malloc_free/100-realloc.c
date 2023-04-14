#include <stdlib.h>
#include <string.h>
/**
 * _realloc - realloc using malloc and free
 *
 * @ptr: first pointer
 * @old_size: old size of malloc
 * @new_size: new size of malloc
 *
 * Return: new array with new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int size_to_copy = old_size < new_size ? old_size : new_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, size_to_copy);
	free(ptr);

	return (new_ptr);
}
