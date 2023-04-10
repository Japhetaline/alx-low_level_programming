#include "main.h"

/**
 * clear_bit - function that sets bit to 0 at given index
 * @n: digit to set bit ti
 * @index: index to set bit to
 * Return: 1 if success, or -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int top = 0x01;

	top = ~(top << index);
	if (top == 0x00)
		return (-1);
	*n &= top;
	return (1);
}
