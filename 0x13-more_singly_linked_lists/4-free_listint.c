#include "lists.h"

/**
 * Description: free_listint - a function that frees a listint_t list.
 * @head: head
 */

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
