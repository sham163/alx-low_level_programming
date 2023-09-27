#include "lists.h"

/**
 * Description: get_nodeint_at_index - a function that returns the nth node
 * @head: head
 * @index: index
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *no;
	unsigned int s;

	no = head;
	s = 0;

	for (; s < index && (no != NULL); no = no->next, s++)
		;

	return (no);
}
