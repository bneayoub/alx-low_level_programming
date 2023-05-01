#include "lists.h"
/**
 * sum_listint - sums all elements
 *
 * @head: head of the linked list.
 *
 * Return: sum of all elements
 * 0 if head is NULL
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
