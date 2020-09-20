#include<stdio.h>
/**
* main - main
*
* Return: 0
*
*/
int main(void)
{
int i;
int f;
for (i = '0'; i <= '9' ; i++)
{
for (f = '0'; f <= '9'; f++)
{
if (i != '0' || f != '0')
{
putchar (',');
putchar (' ');
}
putchar (i);
putchar (f);
}
}
putchar ('\n');
return (0);
}
