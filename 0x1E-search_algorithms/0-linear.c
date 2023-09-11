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
	size_t k = 0;

	if (!array || size <= 0)
		return (-1);
	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%lu] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}
	return (-1);
