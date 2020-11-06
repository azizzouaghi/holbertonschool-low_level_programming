#include "holberton.h"
/**
*get_bit - get value of current bit
*@n: num
*@index: index of the bit
*Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
char bit = ((n >> index) & 1);
return (bit);
}
