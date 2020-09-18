#include <stdio.h>
/**
* main -
* description: base 16
* Return: always 0
*/
int main(void)
{
int s;
for (s = 48; s < 58; s++)
putchar(s);
for (s = 'a'; s <= 'f'; s++)
putchar(s);
putchar('\n');
return (0);
}
