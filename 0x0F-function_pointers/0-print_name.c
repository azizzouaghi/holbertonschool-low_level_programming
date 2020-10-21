#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_name - prints a name
*@name: pointer
*@f: pionter
*Return: ;
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
