#include "lists.h"

/**
 * add_nodeint - adds new node at the start of the list
 *
 * @head: ** head of the linked list.
 * @n: int to add in new node
 *
 * Return: adress of the new node
 * NULL returned otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
