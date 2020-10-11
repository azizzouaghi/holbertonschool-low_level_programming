#include <stdio.h>
/**
* main - desplay program name
* @argc: counts number of arguments
* @argv: argumrnts vector
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
