#include "lists.h"
/**
 * add_node_end - adds a node at the end
 *
 * @head: ** head of the list
 * @str: str to append
 *
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tmp;

	if (head == NULL || str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	if (!*head)
		*head = newNode;

	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = newNode;
	}
	return (newNode);
}
