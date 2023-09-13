#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search
 * @array: A pointer to the input array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The index of the value in the array if found
 * otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
