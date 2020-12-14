#include "lists.h"
/**
*add_dnodeint - adds a node at the beginning of the list
*@head: pointer to the list
*@n: int
*Return: ;
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *i;
i = malloc(sizeof(dlistint_t));
if (i == NULL)
return (NULL);
i->n = n;
i->next = *head;
*head = i;
return (i);
}
