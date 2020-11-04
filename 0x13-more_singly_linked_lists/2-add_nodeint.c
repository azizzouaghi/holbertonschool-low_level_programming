#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint -  adds a new node at the beginning of a listint_t list
*@head: head of list
*@n: pointer
*Return: address
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
if (head != NULL)
{
newnode = malloc(sizeof(listint_t));
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
else
return (NULL);
}
