#include "lists.h"

/**
 * Description: free_list - free_list
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *no, *ne;

	if (head == NULL)
		return;

	no = head;

	while(no != NULL)
	{
		ne = no->next;
		free(no->str);
		free(no);
		no = ne;
	}
}
