#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, a;

srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
if (n > 5)
  printf("Last digit of %D is %f  and is greater than 5\n", n, a);
else if (n == 0)
  printf(" Last digit of %d is %k and is 0\n", n, a);
else (n < 6)
       printf("%d Last digit of %f is %f  and is less than 6 and not 0\n", n, a);
 return (0);
}
