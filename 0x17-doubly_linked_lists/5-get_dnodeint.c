#include "lists.h"
/**
*get_dnodeint_at_index - gets a node
*@head: node
*@index: node index
*Return: ;
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int iindex;
iindex = 0;
if (!head)
return (NULL);
while (iindex < index)
{
index++;
if (!head)
return (NULL);
head = head->next;
}
return (head);
}
