#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3or
 * 5 below 1024 (excluded), followed by a new line
 * Retuen: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);
		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
