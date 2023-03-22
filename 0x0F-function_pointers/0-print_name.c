#include "function_pointers.h"
#include <stddef.f>
/**
 * print_name - prints a nmae
 * @name: name to be printed
 * @f: void function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	{
		f(name);
	}
}
