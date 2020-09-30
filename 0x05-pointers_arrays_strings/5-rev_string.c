#include "holberton.h"
/**
*rev_string -reverse string
*@s: p
*return: 0
*/
void rev_string(char *s)
{
int i, j;
char c;
for (i = 0; s[i]; i++)
{
for (j = 0; j < (i / 2); j++)
{
c = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = c;
}
}
}
