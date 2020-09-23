#include "holberton.h"
/**
 * times_table - times
 *
 * Return: Always 0
 */
void times_table(void)
{
int a, n, m, p, e;
for (a = 0; a < 10; a++)
{
for (n = 0; n < 10; n++)
{
c = a * n;
p = m / 10;
e = m % 10;
if (n == 0)
_putchar('0');
else if (c < 10)
{
_putchar(' ');
_putchar('0' + e);
}
else
{
_putchar('0' + p);
_putchar('0' + e);
}
if (n < 9)
{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
}
}
}
