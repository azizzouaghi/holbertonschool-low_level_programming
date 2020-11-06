#include "holberton.h"
/**
*set_bit - sets the value of a bit to 1 at a given index
*@n: num
*@index: index of the bit
*Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int new;
new = (1 << index) | *n;
if (index > 31)
return (-1);
else
*n = new;
return (1);
}
