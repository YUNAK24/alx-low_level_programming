#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function what to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
