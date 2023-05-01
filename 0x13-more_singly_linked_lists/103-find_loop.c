#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a listint_t linked list.
 *
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: The address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}

		slow = slow->next;
		fast = (fast->next) ? (fast->next)->next : NULL;
	}

	return (NULL);
}
