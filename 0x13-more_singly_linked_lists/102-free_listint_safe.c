#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 *
 * @h: head of the list.
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0, i;
	listint_t **tmp, *next;
	listint_t **node_arr = NULL;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		for (i = 0; i < nodes; i++)
		{
			if (*h == node_arr[i])
			{
				*h = NULL;
				free(node_arr);
				return (nodes);
			}
		}

		nodes++;
		tmp = realloc(node_arr, nodes * sizeof(listint_t *));
		if (!tmp)
		{
			free(node_arr);
			exit(98);
		}
		node_arr = tmp;
		node_arr[nodes - 1] = *h;

		next = (*h)->next;
		free(*h);
		*h = next;
	}

	free(node_arr);
	return (nodes);
}
