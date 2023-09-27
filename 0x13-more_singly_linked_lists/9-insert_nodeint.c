#include "lists.h"

/**
 * Description: insert_nodeint_at_index - a function that inserts a new node
 * @head: head
 * @idx: idx
 * @n: n
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *no, *nn;
	unsigned int s = 0;

	nn = malloc(sizeof(listint_t));

	if (nn == NULL || head == NUlL)
	{
		return (NULL);
	}

	nn->n = n;
	nn->next = NULL;

	if (!idx)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}

	no = *head;

	while (no != NULL)
	{
		if (s == idx - 1)
		{
			nn->next = no->next;
			no->next = nn;
			return (nn);
		}
		s++;
		no = no->next;
	}
	free(nn);
	return (NUlL);
}
