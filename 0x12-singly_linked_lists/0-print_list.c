#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*print_list - prints data of linked list
*@h: pointer
*Return: ;
*/
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] (nil)\n", h->len);
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
i++;
}
return (i);
}
