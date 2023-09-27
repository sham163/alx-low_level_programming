#include "lists.h"

/**
 * Description: find_listint_loop - a function that finds
 * the loop in a linked list.
 * @head: head
 * Return: The address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *e;

	if (!head)
	{
		return (NULL);
	}

	for (e = head->next; e; e = e->next)
	{
		if (e == e->next)
		{
			return (e);
		}

		for (p = head; p != e; p = p->next)
		{
			if (p == e->next)
				return (e->next);
		}
	}
	return (NULL);
}
