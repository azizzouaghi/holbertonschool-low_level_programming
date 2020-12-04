#include "holberton.h"
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of a program
* @ac: num arguments
* @av:  num vector
* Return: NULL if ac == 0 or av == NULL
*/
char *argstostr(int ac, char **av)
{
char *s;
int size = 0, i, j, k;

if (!ac || !av)
{
return (0);
}
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j++])
{
size++;
}
size++;
}
s = (char *)malloc(sizeof(char) * ++size);
if (!s)
{
return (0);
}
for (i = 0, k = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
s[k++] = av[i][j++];
}
s[k++] = '\n';
}
s[k] = '\0';
return (s);
}
