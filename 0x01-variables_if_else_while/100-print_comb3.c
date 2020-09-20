#include <stdio.h>
/**
* main - main function
*
* Return: Always 0
*/
int main(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
for (b = a + 1; b <= 9; b++)
{
putchar('0' + a);
putchar('0' + b);
c = a * 10 + b;
if (c < 89)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
}
return (0);
}
