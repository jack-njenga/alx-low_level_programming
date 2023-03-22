#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: nmae to be printed
 * @f: pointer to a function which
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
