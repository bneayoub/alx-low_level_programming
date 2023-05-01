#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns elements count
 *
 * @h: head of the linked list.
 *
 * Return: Elements count
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
