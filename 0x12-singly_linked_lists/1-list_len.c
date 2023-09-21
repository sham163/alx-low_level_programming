#include "lists.h"

/**
 * Description: list_len - list_len
 * @h: pointer to head
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	size_t ec = 0;

	while (h != NULL)
	{
		ec += 1;
		h = h->next;
	}
	return (ec);
}

