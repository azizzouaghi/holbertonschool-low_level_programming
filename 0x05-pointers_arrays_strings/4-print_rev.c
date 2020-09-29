#include "holberton.h"
/**
* print_rev - print rev.
* @s : int
* Return: Always 0.
*/
void print_rev(char *s)
{
int counter = 0;
while (s[counter] != '\0')
counter++;
while (counter)
{
_putchar (s[counter]);
counter--;
}
_putchar(s[counter]);
}
