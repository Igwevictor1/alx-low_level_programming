#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: return pointer to array created
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t = NULL)
		return (NULL);
	for (i = 0; i < size, i++)
		t[i] = c;

	return (t);
}
