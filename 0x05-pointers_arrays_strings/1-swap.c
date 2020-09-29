#include "holberton.h"
/**
* swap_int - swaap
* @a : integer
* @b : integer
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int d;
d = *a;
*a = *b;
*b = d;
}
