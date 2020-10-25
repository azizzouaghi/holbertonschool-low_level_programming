#include <stdarg.h>
#include <stdio.h>
/**
*print_all - prints anything
*@format: list of types of arguments passed to the function
*Return:;
*/
void print_all(const char * const format, ...)
{
va_list list;
char *strcopy;
int i = 0, success;
va_start(list, format);
while (format && format[i])
{
success = 1;
switch (format[i])
{
case 'c':
printf("%c", va_arg(list, int));
break;
case 'i':
printf("%d", va_arg(list, int));
break;
case 's':
strcopy = va_arg(list, char*);
if (strcopy == NULL)
{
printf("(nil)");
break;
}
printf("%s", strcopy);
break;
case 'f':
printf("%f", va_arg(list, double));
break;
default:
success = 0;
break;
}
if (format[i + 1] && success == 1)
{
printf(", ");
}
i++;
}
printf("\n");
va_end(list);
}
