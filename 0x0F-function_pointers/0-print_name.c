#include <stdio.h>
/**
 * print_name - function to call a function
 *
 * @name: parameter 1
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			(*f)(name);
		}
	}
}
