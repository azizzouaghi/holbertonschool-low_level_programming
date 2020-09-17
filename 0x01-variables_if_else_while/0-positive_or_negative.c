#include <stdlib.h>
#include <time.h>
/**
 * main - This program will assign a random number to the variable n
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
  printf("%i is positive \n", n);
}
else if (n == 0)
{
  printf ("%i is zero \n", n);
}
else if (n < 0)
{
  printf ("%i is negative \n", n);
}
return (0);
}
