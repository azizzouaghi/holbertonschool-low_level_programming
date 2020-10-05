#include "holberton.h"
/**
* *_memcpy - copies memory area
* @dest: ;
* @src: ;
* @n : uint
* Return: 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
