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
	size_t i, nodes = 0;
	listint_t *tortoise, *hare, *tmp;

	if (h == NULL || *h == NULL)
		return (0);
	tortoise = *h;
	hare = (*h)->next;
	while (hare && hare->next)
	{
		if (tortoise == hare)
		{
			size_t loop_size = 1;

			hare = hare->next;
			while (tortoise != hare)
			{
				loop_size++;
				hare = hare->next;
			}
			for (i = 0; i < loop_size; i++)
			{
				tmp = (*h)->next;
				free(*h);
				*h = tmp;
			}
			*h = NULL;
			return (nodes + loop_size);
		}
		nodes++;
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		tortoise = (*h);
		hare = hare->next->next;
	}
	while (*h)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		nodes++;
	}
	return (nodes);
}
