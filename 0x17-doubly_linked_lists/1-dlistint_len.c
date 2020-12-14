#include "lists.h"
/**
* dlistint_len - returns the number of elements in a linked dlistint_t list.
* @h: node
* Return: ;
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
