#include <stdio.h>
/**
*main - maine function
*
*Return: 0
*/
int main(void)
{
int a, b, z;

for (a = '0'; a <= '9'; ++a)
{
for (b = a; b <= '9'; ++b)
{
for (z = b; z <= '9'; ++z)
{
if (a != b && a != z && b != z)
{
if (a != '0' || b != '1' || z != '2')
{
putchar(',');
putchar(' ');
}
putchar(a);
putchar(b);
putchar(z);
}
}
}
}
putchar('\n');
return (0);
}
