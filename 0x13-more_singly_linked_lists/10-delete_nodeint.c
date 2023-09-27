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
listint_t *no, *prn;
unsigned int s = 0;

if (head == NULL || *head == NULL)
{
return (-1);
}

if (!index)
{
no = *head;
*head = (*head)->next;
free(no);
return (1);
}

no = *head;

while (no != NULL)
{
if (s == index)
{
prn->next = no->next;
free(no);
return (1);
}
s++;
prn = no;
no = no->next;
}
return (-1);


}
