#include "holberton.h"
/**
*get_bit - get value of current bit
*@n: num
*@index: index of the bit
*Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (sizeof(n) * 8 < index)
return (-1);
n >>= index;
if ((n & 1) == 1)
return (1);
else
return (0);
}
