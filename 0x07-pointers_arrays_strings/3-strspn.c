#include "main.h"
/**
 * _strspn - gets the length of a prefix sub string
 * @s: string to be searched
 * @accept: string that has chars to be search for in @s
 * counter for each time @accept is found in @s. Can only count once.
 *
 * Return: counter
 */
unsigned int_strspn(char *s, char *accept)
{
	int c;
	int i;
	int j;

	c = 0;
	i = 0;
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (c);
}