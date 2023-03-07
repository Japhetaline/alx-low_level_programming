#include "main.h"

/**
 * print_chessboard - Function that print the chessboard
 * @a:an array input to print
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
