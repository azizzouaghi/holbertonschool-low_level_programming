#include "holberton.h"
/**
* _strcat - concatenates
* @dest : ;
* @src : ;
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i] != '\0')
i++;
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}
