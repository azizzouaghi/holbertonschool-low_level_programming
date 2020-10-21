#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_name - prints a name
*@name: pointer
*@f: pointer
*Return: ;
*/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
{
f(name);
}
}
