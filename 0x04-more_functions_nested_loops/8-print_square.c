#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @square: An input integer
 * Return: Always 0
 */
void print_square(int square)
{
	int i;
	int j;

	if (square > 0)
	{
		for (i = 0; i < square; i++)
		{
			for (j = 0; j < square; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
