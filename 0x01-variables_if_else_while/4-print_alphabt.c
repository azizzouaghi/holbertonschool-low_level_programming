#include <stdio.h>
/**
* main - main function
*
* Return: Always 0
*/
int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
if (letter != 'e' && letter != 'q')
putchar(letter);
putchar ('\n');
return (0);
}
