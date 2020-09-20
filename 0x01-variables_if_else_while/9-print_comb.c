#include <stdio.h>
/**
* main - all possible combinations of single-digit numbers
*
* Return: always 0
*/int main(void)
{
int om;
for (om = '0'; om <= '9'; ++om)
{
if (om != '0')
{
putchar(',');
putchar(' ');
}
putchar(om);
}

putchar('\n');
return (0);
}
