#include "lists.h"

/**
 * Description: listint_len - function that returns the number of elements
 * @h: h
 * Return: num of elem
 */

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}


	return (s);
}
