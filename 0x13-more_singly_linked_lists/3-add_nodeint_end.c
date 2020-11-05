#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint_end - adds a new node at the end of a listint_t list
*@head: head of list
*@n: int
*Return: ;
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end, *temp;
end = malloc(sizeof(listint_t));
if (end == NULL)
return (NULL);
end->n = n;
end->next = NULL;
if (*head == NULL)
{
*head = end;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = end;
}
return (end);
}
