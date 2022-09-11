#include <stdlib.h>
#include <stdio.h>
/**
 *
 * main - Prints lower and upper case alphabets
 * 
 * Description: Using main function, prints lower and upper case
 * Return: 0
 */
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
