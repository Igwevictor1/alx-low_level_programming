#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	largest = (a > b) ? a : b;
	largest = (largest > c) ? largest : c;
	return (largest);
}
