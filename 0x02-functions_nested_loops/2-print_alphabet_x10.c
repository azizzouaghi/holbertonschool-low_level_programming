#include "holberton.h"
/**
* print_alphabet_x10 - main function
* description: prints the alphabet, in lowercasen
* Return: Always 0
*/
void print_alphabet_x10(void)
{
int s, n;
n = 1;
while (n <= 10)
{
for (s = 'a' ; s <= 'z' ; s++)
{
_putchar(s);
}
_putchar('\n');
n++;
}
return;
}
