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
const list_t *tmp;
tmpp = h;
if (tmp == NULL)
{
return (0);
}
while (tmp != NULL)
{
if (tmp->str == NULL)
{
printf("[%d] (nil)\n", tmp->len);
tmp = tmp->next;
i++;
}
else
{
printf("[%d] %s\n", tmp->len, tmp->str);
tmpp = tmp->next;
i++;
}
}
return (i);
}
