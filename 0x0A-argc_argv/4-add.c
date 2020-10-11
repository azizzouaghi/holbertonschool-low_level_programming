#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - function main
* @argc: int
* @argv: char
* Return: ;
*/
int main(int argc, char *argv[])
{
int a, i, j;
a = 0;
for (i = 1; i < argc; i++)
for (j = 0; argv[i][j]; j++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
for (i = 1; i < argc; i++)
a += atoi(argv[i]);
printf("%d\n", a);
return (0);
}
