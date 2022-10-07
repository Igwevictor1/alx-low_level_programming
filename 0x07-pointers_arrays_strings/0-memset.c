#include "maim.h"
/**
 * _memset - function filld the first n byte of the memory
 * @s: pointer char
 * @b: character to be printed
 * @n: number of bytes
 *
 * _memset: function fills the first n byte of memory area
 *
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

