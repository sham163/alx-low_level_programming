#include "lists.h"

/**
 * Description: free_listint_safe - a function that frees a listint_t list.
 * @h: h
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *ne, *ln;
	size_t le;
	int lo = 1;

	if (!*h || !h)
	{
		return (0);
	}

