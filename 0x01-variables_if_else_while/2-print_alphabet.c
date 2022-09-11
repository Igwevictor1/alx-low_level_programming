#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints all lower case alphabets
 *
 * Description: Prints all alphabets using the the main function
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
