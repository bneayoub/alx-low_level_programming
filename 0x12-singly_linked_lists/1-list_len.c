#include "lists.h"
/**
 * list_len - counts numbers of nodes in list_t
 *
 * @h: head of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
