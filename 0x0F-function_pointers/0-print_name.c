#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - functions that prints name
 * @name: pointer to name to print
 * @f: function to prints name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
