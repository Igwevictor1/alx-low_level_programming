#include "main.h"

/**
 * swap_int - swaps the value of int a and int b
 * @a: First int to swap
 * @b: Second int to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
