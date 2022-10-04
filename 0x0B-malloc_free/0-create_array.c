#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with s specific char
 * @s: The size of the array to be initialized
 * @c: The specific char to initialize the array with
 *
 * Return: if size == 0 or thr function fails -  NULL
 * Otherwise - a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (sie == 0)
		return (NULL);
	array = malloc(sizeof(chahr) * size);

	if (array == NULL)

		for (index = 0; index < size; index++)
			array[index] = c;

	return (array);
}
