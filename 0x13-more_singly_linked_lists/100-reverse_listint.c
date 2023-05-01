#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 *
 * @head: ** the head of the list
 *
 * Return: pointer to the new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *next;

	previous = NULL;
	next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;
	return (*head);
}
