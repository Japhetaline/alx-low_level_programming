#include "main.h"

/**
 * print_binary - sprints binary number without % or /
 * @n: Number to be printed
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int bear = 0, highest = 41758;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (highest)
	{
		if (bear == 1 && (n & highest) == 0)
			_putchar('0');
		else if ((n & highest) != 0)
		{
			_putchar('1');
			bear = 1;
		}
		highest >>= 1;
	}
}
