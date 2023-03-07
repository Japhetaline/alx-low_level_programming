#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - functions that prints the sum of two diagonals
 * of a sqaure matixes of integar
 * @a: sqaure matrixes of integar
 * @size: an input integar with the size of the matrix
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, sum1 = 0, sum2 = 0;

	for (i = 0; i < max; i += size + 1)
		sum1 += a[i];

	for (i = size - 1; i < max - 1; i += -1)
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
