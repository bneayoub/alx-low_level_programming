#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node in a given index
 *
 * @head: ** head of the list
 * @index: index where deletion occurs
 *
 * Return: 1 if deletion was success
 * -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *new_node;
	unsigned int i;

	if (!*head)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index - 1 && tmp->next; i++)
		tmp = tmp->next;

	if (!tmp->next)
		return (-1);

	new_node = tmp->next->next;
	free(tmp->next);
	tmp->next = new_node;
	return (1);
}
