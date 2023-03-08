#include "main.h"

/**
 * _puts_recursion - functions that prints a trings, followed by a line
 * @s: an input string to printing
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
			_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
