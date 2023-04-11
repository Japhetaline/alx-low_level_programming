#include "main.h"

/**
 * get_endianness - This is a function that hecks endianness
 * Return: output 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *k = (char *)&j;

	if (*k)
		return (1);
	return (0);
}
