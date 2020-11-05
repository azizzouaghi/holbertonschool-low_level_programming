#include <stdio.h>
#include "lists.h"
/**
*insert_nodeint_at_index - that inserts a new node at a given position
*@idx: index
*@n: int
*@head: first node
*Return: address
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
i = 0;
listint_t *tmp = *head;
if (tmp == NULL)
{
return (NULL);
}
while ((tmp != NULL) && (idx != i))
{
i++;
tmp = tmp->next;
}
tmp->n = n;
return (tmp);
}
