#include "lists.h"

/**
 * Description: add_nodeint - a function that adds a new node
 * @head: head
 * @n: n
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));

	if (head == NULL || nn == NULL)
		return (NULL);

	nn->next = NULL;
	nn->n = n;

	if (*head != NULL)
	{
		nn->next = *head;
	}

	*head = nn;

	return (nn);
}
