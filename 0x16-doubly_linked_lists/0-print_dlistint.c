#include "lists.h"
/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: node
* Return: length num of node
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t  l;
l = 0;
while (h != NULL)
{
++l;
printf("%d\n", h->n);
h = h->next;
}
return (l);
}
