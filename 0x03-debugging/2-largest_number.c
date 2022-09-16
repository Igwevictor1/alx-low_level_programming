#include "main.h"
/**
 * largest_number - Returns the largest of three numbers.
 * @a: First number
 * @b: Second number
 * @c: Third number
 * Return: Largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	largest = (a > b) ? a : b;
	largest = (largest > c) ? largest : c;
	return (largest);
}
