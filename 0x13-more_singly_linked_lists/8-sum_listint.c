#include <stdio.h>
#include "lists.h"
/**
*sum_listint - returns the sum of all the data (n) of a listint_t linked list
*@head: pointer
*Return: ;
*/
int sum_listint(listint_t *head)
{
int i = 0;
listint_t *tmp;
if (head == NULL)
return (0);
tmp = head;
while (tmp != NULL)
{
i += tmp->n;
tmp = tmp->next;
}
return (i);
}
