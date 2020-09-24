#include "holberton.h"
/**
* print_line - check the code for Holberton School students.
* @s: integer
* Return: Always 0.
*/
void print_line(int s)
{
int l;
for (l = 0; l < s; l++)
{
_putchar ('_');
}
_putchar ('\n');
}
