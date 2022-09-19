#include "main.h"

/**
 * print_rev - Prints a string in revers
 * @s: String to be reversed.
 */
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (S[i++])
		len++;

	for (i = len - l; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
