#include <stdio.h>

/**
 * maim - prints first 50 fibonacci mumbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Description: write a program that prints the first 50 fibonacci numbers starting with 1 and 2 followed bu a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 89)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
