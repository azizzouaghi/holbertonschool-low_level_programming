#include "holberton.h"
/**
* print_alphabet_x10 - main function
* description: ptint x10
* Return: Always 0
*/
void print_alphabet_x10(void)
{
  int i, c;
  c = 'a';
 for (i = 1; i <= 10; i++)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
 c = 'a';
_putchar('\n');
}
 return;
}

