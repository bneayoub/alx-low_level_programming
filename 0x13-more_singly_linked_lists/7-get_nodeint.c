#include "lists.h"
/**
 * get_nodeint_at_index - returns the n th node
 *
 * @head: head of the linked list.
 * @index: the n th index to work with
 *
 * Return: pointer the n th index
 * or NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index-- && head)
		head = head->next;

	return (head);
}
