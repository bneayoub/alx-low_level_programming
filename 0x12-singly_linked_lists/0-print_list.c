#include "lists.h"
/**
 * print_list - prints all elements of list_t
 *
 * @h: head of the linked list
 *
 * Return: count of elements (nodes)
 */
size_t print_list(const list_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}
