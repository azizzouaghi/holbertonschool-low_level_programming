#include <stdio.h>
#include "lists.h"
/**
* before_main - runs before main function
* Return: ;
*/
void  __attribute__((constructor)) before_main()
{
printf("You\'re beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
