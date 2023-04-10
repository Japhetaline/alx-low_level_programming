#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned integer
 * @b: Pointer to be in binary string
 * Return: shows unsigned int converted to number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, outcome = 0, range = 0;

	if (b == NULL)
		return (0);

	while (b[range])
		range++;

	while (range)
	{
		if (b[range - 1] != '0' && b[range - 1] != '1')
			return (0);

		if (b[range - 1] == '1')
			outcome += base;
		base *= 2;
		range--;
	}
	return (outcome);
}
