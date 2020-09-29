#include "holberton.h"
/**
* _puts - prints
* @str : intger
* Return: Always 0.
*/
void _puts(char *str)
{
int i;
{
for (i = 0 ; *str != '\0'; i++)
_putchar (*str);
}
_putchar ('\n');
}
