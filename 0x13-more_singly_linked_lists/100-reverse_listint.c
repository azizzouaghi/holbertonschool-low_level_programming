#include <stdio.h>
#include "lists.h"
/**
*reverse_listint -  reverses a listint_t linked list
*@head: head of list
*Return: head
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *pr = NULL;
listint_t *cur = *head;
listint_t *next = NULL;
while (cur != NULL)
{
next = cur->next;
cur->next = pr;
pr = cur;
cur = next;
}
*head = pr;
return (*head);
}
