#include <stdio.h>
#include "lists.h"
/**
*get_nodeint_at_index - function that returns the nth node of a list
*@index: index of the element
*@head: first data
*Return: ;
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *tmp = head;
if (head == NULL)
{
return (NULL);
}
while ((tmp != NULL) && (index != i))
{
tmp->n = i;
i++;
tmp = tmp->next;
}
return (tmp);
}
