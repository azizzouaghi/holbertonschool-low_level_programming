#include "holberton.h"
/**
* *_strstr - locates a substring
* @haystack : char
* @needle : char
* Return: ;
*/
char *_strstr(char *haystack, char *needle)
{
int i, j = 0;
for (i = 0; haystack[i]; i++)
{
while (haystack[i + j - 1] == needle[j - 1])
{
j++;
if (!needle[j])
return (&haystack[i]);
}
}
return (0);
}
