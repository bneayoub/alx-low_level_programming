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
	size_t size = 0;
	listint_t *tmp;

	while (*h)
	{
		size++;
		if (*h <= (*h)->next)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}

	return (size);
}
