#include "lists.h"

/**
 * Description: print_listint - a function that prints all the elements
 * @h: h
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
