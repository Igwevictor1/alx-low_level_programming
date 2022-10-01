#include "main.h"

/**
 * _memcpy - Copies the memory area
 * @dest: destination
 * @src: src
 * @n: bytes to be printed
 * 
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
