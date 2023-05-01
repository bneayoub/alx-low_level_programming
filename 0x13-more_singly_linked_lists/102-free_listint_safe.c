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
	listint_t *tortoise, *hare, *tmp;
	size_t nodes = 1, index;

	if (*h == NULL || (*h)->next == NULL)
		return (0);

	tortoise = (*h)->next;
	hare = ((*h)->next)->next;

	while (hare && tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = (hare->next) ? hare->next->next : NULL;
	}

	if (hare)
	{
		tortoise = *h;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
			hare = hare->next;
		}
		tortoise = tortoise->next;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
		}
	}

	for (index = 0; index < nodes; index++)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}
	*h = NULL;
	return (nodes);
}
