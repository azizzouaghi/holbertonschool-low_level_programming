#include "holberton.h"
/**
* _strlen - counts
* @s : intger
* Return: Always 0.
*/
int _strlen(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
