#include "lists.h"
/**
*add_dnodeint - adds a new node at the beginning of a dlistint_t list
*@head: linked list
*@n: int passed
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *element;
element = malloc(sizeof(dlistint_t));
if (element == NULL)
return (NULL);
element->n = n;
element->next = *head;
*head = element;
return (element);
}
