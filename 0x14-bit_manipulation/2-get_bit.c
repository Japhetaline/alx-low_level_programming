#include "main.h"

/**
 * get_bit - functions that gets a bit at index
 * @n: digit to get bit from
 * @index: where the bit get at
 * Return: shows value of bit or -1 if fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int top = 0x01;

	top <<= index;
	if (top == 0)
		return (-1);

	if ((n & top))
		return (1);
	else
		return (0);
}
