#include "lists.h"
/**
*add_dnodeint_end - adds a new node at the end of a dlistint_t list
*@head: haed
*@n: int
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newElement;
dlistint_t *store;
newElement = malloc(sizeof(dlistint_t));
if (newElement == NULL)
return (NULL);
newElement->n = n;
newElement->next = NULL;
store = *head;
if (*head == NULL)
{
*head = newElement;
return (newElement);
}
else
{
while (store->next != NULL)
store = store->next;
store->next = newElement;
}
return (store);
}
