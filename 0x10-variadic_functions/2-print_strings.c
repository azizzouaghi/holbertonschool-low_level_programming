#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - prints strings
*@n: the number of strings passed to the function
*@separator: string to be printed between strings
*Return: ;
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
{
str = va_arg(list, char *);
if (str)
printf("%s", str);
else
printf("nil");
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
