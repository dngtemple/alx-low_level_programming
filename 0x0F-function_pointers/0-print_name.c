#include "function_pointers.h"

/**
 * print_name - prints a nmae
 * @name: name to be printed
 * @f: void function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
