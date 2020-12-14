#include "lists.h"
/**
* dlistint_len - adds a new node at the beginning of a dlistint_t list
* @h: node
* Return: the address of the new element, or NULL if it failed
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t  l;
l = 0;
while (h != NULL)
{
++l;
h = h->next;
}
return (l);
}
