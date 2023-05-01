#include "lists.h"
/**
 * print_listint - prints elements of singly linked list
 *
 * @h: Head of the list
 *
 * Return: The count of nodes
*/
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
