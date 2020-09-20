#include <stdio.h>
/**
* main - all possible combinations of single-digit numbers
*
* Return: always 0
*/
int main(void)
{
int a;

for (a = '0'; a <= '9'; ++a)
{
if (a != '0')
{
putchar(',');
putchar(' ');
}
putchar(a);
}

putchar('\n');
return (0);
}
