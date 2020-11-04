#include <stdio.h>
#include "lists.h"
/**
*print_listint - prints all the elements of a listint_t list
*@h: pointer
*Return: ;
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
if (h == NULL)
{
return (i);
}
while (h != NULL)
{
i++;
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
