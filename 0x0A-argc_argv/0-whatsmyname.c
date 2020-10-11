#include <stdio.h>
/**
* main - desplay program name
* @argc: counts number of arguments
* @argv: vector of arguments
* return: 0
*/
int main(int argc, char *argv[])    
{
if (argc >= 1)
{
printf("%s",argv[0]);
putchar('\n');
}
return 0;
}
