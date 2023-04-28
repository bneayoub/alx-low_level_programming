#include "lists.h"
/**
 * free_list - frees list_t
 *
 * @head: head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
