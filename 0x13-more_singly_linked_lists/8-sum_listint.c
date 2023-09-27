#include "lists.h"

/**
 * Description: sum_listint - a function that returns the sum
 * @head: head
 * Return: if the list is empty, return 0
 */


int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NUlL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
