#include <stdio.h>

/**
 * main - prints alphabets 10 tims in lower case
 *
 * Description: prints ten times the alphabets in lowercase.
 */
int main(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
	return (0);
}
