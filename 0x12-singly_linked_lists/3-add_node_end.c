#include "lists.h"

/**
* Description: add_node_end - add_node_end
* @head: head
* @str: str
* Return: the address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *cu, *n = malloc(sizeof(list_t));

if (n == NULL || str == NULL)
{
return (NULL);
}

n->str = strdup(str);
if (n->str == NULL)
{
free(n);
return (NULL);
}
if (!*head)
{
*head = n;
}
else
{
cu = *head;
while (cu->next)
{
cu = cu->next;
}
cu->next = n;
}

return (n);
}
