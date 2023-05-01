#include "lists.h"
/**
 * free_listint2 - Frees a linked list
 *
 * @head: head of the linked list
 *
 * Return: Void and frees linked list and sets head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head || !*head)
		return;

	tmp = *head;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
