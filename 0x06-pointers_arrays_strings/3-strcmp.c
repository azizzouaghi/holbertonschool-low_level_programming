
#include "holberton.h"
/**
* _strcmp - compares
* @s1: string
* @s2: string
* Return: av
*/
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
{
i++;
}
return (s1[i] - s2[i]);
}
