#include "holberton.h"
/**
* flip_bits - returns the number of bits you would need to flip
* @n : num1
* @m : num2
* Return: the nuber of bite you would need to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int c;
int i = 0;
c = n ^ m;
while (c >= 1)
{
if ((c & 1) == 1)
{
i++;
c >>= 1;
}
}
return (i);
}
