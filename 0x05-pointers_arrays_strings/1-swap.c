#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first integer.
 * @b: second integer.
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
