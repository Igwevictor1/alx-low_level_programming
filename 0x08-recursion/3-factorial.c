#include "main.h"

/**
 * factorial - returns a factorial of a given number
 * @n: interger to take factorial of
 *
 * Return: factorial of n, or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
