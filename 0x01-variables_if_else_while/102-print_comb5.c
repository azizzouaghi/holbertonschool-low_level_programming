#include <stdio.h>
/**
*main - main function
*
*Return: 0
*/
int main(void)
{
int s, a;
for (s = 0; s <= 99; ++s)
{
for (a = s; a <= 99; ++a)
{
if (s != a)
{
if (s != 0 || a != 1)
{
putchar(',');
putchar(' ');
}
putchar(s / 10 + '0');
putchar(s % 10 + '0');
putchar(' ');
putchar(a / 10 + '0');
putchar(a % 10 + '0');
}
}
}
putchar('\n');
return (0);
}
