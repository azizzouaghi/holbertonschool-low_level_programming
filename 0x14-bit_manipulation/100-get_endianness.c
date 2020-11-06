#include "holberton.h"
/**
* get_endianness - checks all endianness
* Return: 0 if big endian 1 if little endian
*/

int get_endianness(void)
{
unsigned int n = 1;
char *ch = (char *)&n;
if (*ch)
return (1);
else
return (0);
}
