#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints all alphabets except q and e
 *
 * Description: Use the main function, puts all alphabets but !q && !e
 * Return: 0
 * */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
