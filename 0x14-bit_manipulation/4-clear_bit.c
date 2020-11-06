#include "holberton.h"
/**
*clear_bit - sets the value of a bit to 0 at a given index
*@n: num
*@index: index of the bit
*Return: -1 or 1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (sizeof(int) * 8 < index)
return (-1);
*n = *n & ~(1 << index);
return (1);
}
