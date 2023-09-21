#include "lists.h"

/**
* Description: add_node - add_node
* @head: head
* @str: str
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *n = malloc(sizeof(list_t));

if (n == NULL || str == NULL)
return (NULL);
if (str != NULL)
{
n->str = strdup(str);

if (!n->str)
{
free(n);
return (NULL);
}
n->len = strlen(n->str);
}
n->next = *head;
*head = n;
return (n);
}
