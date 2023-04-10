#include "main.h"

/**
 * set_bit - functions that sets a bit at given index to 1
 * @n: number to set bit in
 * @index: where to set bit to
 * Return: 1 if success, or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int top = 0x01;

	top <<= index;
	if (top == 0)
		return (-1);
	*n |= top;
	return (1);
}
