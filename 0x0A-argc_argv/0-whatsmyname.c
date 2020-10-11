#include <stdio.h>
/**
* main - desplay program name
* @argc: counts number of arguments
* @argv: vector of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
if (argc)
{
printf("%s", argv[0]);
putchar('\n');
}
return (0);
}
