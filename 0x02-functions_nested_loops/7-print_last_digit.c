#include "holberton.h"
/**
* print_last_digit - main function
* description: print last digit of an integer
*@s : integer
* Return: Always n
*/
int print_last_digit(int s)
{
int t;
if (s >= 0)
{
t = s % 10;
_putchar ('0' + t);
return (t);
}
else
{
t = ((s % 10) * -1);
_putchar ('0' + t);
return (t);
}
}
