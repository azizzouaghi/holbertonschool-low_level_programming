#include "holberton.h"
/**
 *puts2 - puts
 *@str: p
 * return : 0
 */
void puts2(char *str)
{
int a;
a = 0;
while (*str != '\0')
{
if (a % 2 == 0)
{
_putchar (*str);
}
str++;
a++;
}
_putchar('\n');
}
