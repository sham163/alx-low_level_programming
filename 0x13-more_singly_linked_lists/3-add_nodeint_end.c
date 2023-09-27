#include "lists.h"

/**
 * Description: add_nodeint_end -  a function that adds a new node
 * @head: head
 * @n: n
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *nn;

	nn = malloc(sizeof(listint_t));

	if (nn == NULL || head == NULL)
		return (NULL);

	nn->next = NULL;
	nn->n = n;

	if (*head == NULL)
	{
		*head = nn;
	}
	else
	{
		node = *head;

		while (node->next)
		{
			node = node->next;
		}
		node->next = nn;
	}
	return (nn);
}
