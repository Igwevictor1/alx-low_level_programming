#include <stddef.h>
#include "function_pounters.h"

/**
 * print_name - prints a name
 * @name: name of person
 * @f: pointer to function f.
 * @f
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
