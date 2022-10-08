#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return length of a string
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *t;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	t = malloc(sizeof(char) * c + 1);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		t[i] = str[i];

	return (t);
}
