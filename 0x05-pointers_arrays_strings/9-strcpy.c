#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the 
 * the terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: A source string to copy.
 *
 * Return: A pointer to the destimation string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
