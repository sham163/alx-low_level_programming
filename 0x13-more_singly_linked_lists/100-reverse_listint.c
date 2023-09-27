#include "lists.h"

/**
 * Description: reverse_listint - a function that
 * reverses a listint_t linked list
 * @head: head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *no, *ne;

	no = NULL;
	ne = NULL;

	if (*head == NULL || head == NULL)
	{
		return (NULL);
	}

	no = *head;
	*head = NULL;

	while (no != NULL)
	{
		ne = no->next;
		no->next = *head;
		*head = no;
		no = ne;
	}

	return (*head);
}
