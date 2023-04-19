#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name uisng pointer
 * @name: string input
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
