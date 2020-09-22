#include "holberton.h"
/**
* _abs - main function
* @f : integer
* Return: Always 0.
*/
int _abs(int f)
{
if (f < 0)
{
return (-f);
_putchar ('0' + f);
}
else
return (f);
}
