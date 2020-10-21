#include <stdio.h>
/**
*array_iterator - function 
*@array: array
*@size: size
*@action: action
*Return: ;
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (size != 0 && array != 0 && action != 0)
{
for (i = 0; i < size ; i++)
action(array[i]);
}
}
