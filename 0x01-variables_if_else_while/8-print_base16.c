#include <stdio.h>
/**
* main - base 16
* description: base 16
* Return: always 0
*/
int main(void)
{
char s;
int n;
for (n = 0; n < 10; n++)
putchar(n + '0');
for (s = 'a'; s <= 'f'; s++)
putchar(s);
putchar('\n');
return (0);
}
