#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creats an array of chars
*@size: number of bytes to allocate
*@c: char
*Return: ;
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
i = 0;
if (size == 0)
{
return (NULL);
}
array = malloc(size * sizeof(char));
if (i < size)
{
while (i < size)
{
array[i] = c;
i++;
}
return (array);
}
else
{
return (0);
}
}
