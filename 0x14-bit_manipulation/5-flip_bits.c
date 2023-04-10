#include "main.h"

/**
 * flip_bits - functions that ges number of bits needed to flip
 * @n: amount of bit flips are needed to equal m
 * @m: digit to sets other equals
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int top = 0x01;

	while (top <= xor)
	{
		if (top & xor)
			flip++;
		top <<= 1;
	}
	return (flip);
}
