#include <stdio.h>
#include "lists.h"
/**
* listint_len - returns the number of elements in a linked list
*@h: pointer
*Return: nodes
*/
size_t listint_len(const listint_t *h)
{
const listint_t *temp;
int i = 0;
temp = h;
while (temp)
{
i++;
temp = temp->next;
}
return (i);
}
