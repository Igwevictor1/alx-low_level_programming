#include "main.h"
/**
 * main - print the alphabet 10 times
 *
 * Return: Always 0.
 */
int main(void)
{
	char a = 'a';
	int n = 10;

	while (n >= 1)
	{
		while (a <= 'z')
		{
			_putchar(a);
			++a;
		}
		--n;
		_putchar(10);
		a = 'a';
	}
}
