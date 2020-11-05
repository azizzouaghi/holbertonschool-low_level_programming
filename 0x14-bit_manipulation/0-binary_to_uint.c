#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: string 
*Return: binary to uint 
*/
unsigned int binary_to_uint(const char *b)
{
const char *tmp = b;
unsigned int len;
unsigned int sum = 0;
unsigned int s;
unsigned int i = 0;
if (tmp == NULL)
return (0);
for (len = 0; tmp[len] != '\0'; len++)
{
if ((tmp[len] != '0') && (tmp[len] != '1'))
return (0);
}
while (len)
{
if (tmp[len - 1] == '1')
{
s = 1 << i;
sum = s + sum;
}
i++;
len--;
}
return (sum);
}
