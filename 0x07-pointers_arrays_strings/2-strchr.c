#include "holberton.h"
/**
* *_strchr - locates a char in a string
*@c: char
*@s: char
*Return: 0
*/
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return (0);
}
