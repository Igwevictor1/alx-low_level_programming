#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 ** main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (a != b && b > a)
			{
				putchar(a);
				putchar(b);
				if (b == 57 && a == 56)
				{
					break
						;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
