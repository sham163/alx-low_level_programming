#include "lists.h"

/**
* Description: delete_nodeint_at_index - a function that
* deletes the node at index
* @head: head
* @index: index
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev, *curr;
unsigned int position;

if (head == NULL || *head == NULL)
{
return (-1);
}



if (!index)
{
curr = *head;
*head = (*head)->next;
free(curr);
return (1);
}

curr = *head;
for (position = 0; position < index - 1; position++)
{
if (position == index)
{
prev->next = curr->next;
free (curr);
return (1);
}

prev = curr;
curr = curr->next;
}
return (-1);

}
