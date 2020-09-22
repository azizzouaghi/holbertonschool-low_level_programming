#include "holberton.h"
/**
* _abs - main function
* @r : integer
* Return: Always 0.
*/
int _abs(int r)
{
if (r > 0)
{
_putchar ('+');
return (1);
}
else if (r < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar ('0');
return (0);
}
}
