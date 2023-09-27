#include "lists.h"

/**
 * Description: pop_listint -  a function that deletes the head node
 * @head: head
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *no;
	int s;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}

	no = (*head)->next;
	s = (*head)->n;

	free(*head);
	*head = no;

	return (s);
}
