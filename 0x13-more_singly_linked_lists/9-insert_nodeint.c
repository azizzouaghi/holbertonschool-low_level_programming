#include <stdio.h>
#include "lists.h"
/**
*insert_nodeint_at_index - that inserts a new node at a given position
*@idx: index
*@n: int
*@head: first node
*Return: adreess
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *temp = *head;
if (temp == NULL)
{
return (NULL);
}
while ((temp != NULL) && (idx != i))
{
i++;
temp = temp->next;
}
temp->n = n;
return (temp);
}
