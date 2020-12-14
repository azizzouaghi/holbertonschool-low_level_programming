#include "lists.h"
/**
* sum_dlistint - adds the int of the nodes
* @head: node
* Return: ;
*/
int sum_dlistint(dlistint_t *head)
{
int i = 0;
while (head)
{
i += head->n;
head = head->next;
}
return (i);
}
