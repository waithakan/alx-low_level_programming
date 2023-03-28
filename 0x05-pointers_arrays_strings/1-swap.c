#include "main.h"
/**
 * swap_int - swaps value of integers
 * @a: points to first value
 * @b: points to second valuea to be swaped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;

}
