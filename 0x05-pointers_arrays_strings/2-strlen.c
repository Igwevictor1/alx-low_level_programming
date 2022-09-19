#include "main.h"

/**
 * _strlen - Retuens the length of a string
 * @str: String.
 *
 * Return: Length.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
