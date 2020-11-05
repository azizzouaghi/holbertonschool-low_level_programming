#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint -  adds a new node at the beginning of a listint_t list
*@head: head of list
*@n: int
*Return: ;
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *tmp;
if (head == NULL)
{
return (NULL);
}
tmp = malloc(sizeof(listint_t));
if (tmp == NULL)
return (NULL);
tmp->n = n;
tmp->next = *head;
*head = tmp;
return (tmp);
}
