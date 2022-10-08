#include "maim.h"
/**
 * _memset - function fills the first n byte
 * s of the memory
 * @s: pointer char
 * @b: character to be printed
 * @n: number of bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
