#include "lists.h"

/**
 * Description: free_listint2 - a function that frees a listint_t list.
 * @head: head
 */

void free_listint2(listint_t **head)
{
	listint_t *n, *t;

	if (head == NULL)
	{
		return;
	}

	n = *head;

	while (n != NULL)
	{
		t = n;
		n = n->next;
		free(t);
	}

	*head = NULL;
}
