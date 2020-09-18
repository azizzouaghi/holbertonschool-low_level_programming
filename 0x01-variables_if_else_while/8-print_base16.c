#include <stdio.h>
/**
* main - base 16
* description: base 16
* Return: always 0
*/
int main(void)
{
int s;
for (s = 0; s <= 9; s++)
putchar(s);
for (s = 'a'; s <= 'f'; s++)
putchar(s);
putchar('\n');
return (0);
}
