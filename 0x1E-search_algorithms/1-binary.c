#include "search_algos.h"

/**
 * binary_search- linear searches for a value in a
 * sorted array using binary
 * @array: A pointer to the sorted array
 * @size: The number of elements in the array
 * @value: The value to search for.
 *
 * Return: The index of the value into the array.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t j = 0, p = 0, n = 0, m = size - 1;

	if (!array || size <= 0)
		return (-1);
	while (n <= m)
	{
		printf("Searching in array: ");
		for (j = n; j <= m; j++)
		{
			if (j < m)
				printf("%d, ", array[j]);
			else
				printf("%d\n", array[j]);
		}
		p = (n + m) / 2;
		if (array[p] < value)
			n = p + 1;
		else if (array[p] < value)
			m = p - 1;
		else
			return (p);
	}
	return (-1);
}
