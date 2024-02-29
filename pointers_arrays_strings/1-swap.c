#include "main.h"
/**
 *swap_int - Swap the values of two integers
 *@a: the first integer to be swapped.
 *@b: the second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
int z = *a;

*a = *b;
*b = z;
}
