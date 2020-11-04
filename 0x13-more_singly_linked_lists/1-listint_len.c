#include <stdlib.h>
#include "lists.h"
/**
*listint_len - returns the number of elements in a linked listint_t list
*@h: pointer
*Return: ;
*/
size_t listint_len(const listint_t *h)
{
size_t count;
count = 0;
if (h == NULL)
{
return (count);
}
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
