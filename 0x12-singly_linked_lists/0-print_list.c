#include "lists.h"

/**
* Dwscription: print_list - a function that prints all the elements
* @h: pointer to head
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
size_t c;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);

c++;
h = h->next;
}
return (c);
}
