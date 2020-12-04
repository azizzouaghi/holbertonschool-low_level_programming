#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - copy
* @str: pointer
* Return: ;
*/
char *_strdup(char *str)
{
char *p;
int i = 0;
int j = 0;
if (str == NULL)
{
return (NULL);
}
while (str[i])
i += 1;
p = malloc(sizeof(char) * i + 1);
if (p == NULL)
return (NULL);
while (*str)
{
p[j] = *str;
str++;
j += 1;
}
p[j] = *str;
return (p);
}
