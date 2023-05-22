#include "main.h"

/**
 * _memcpy - functions that copy memory area
 * @dest: memory area destination to copy
 * @src: memory area sorce to copy from
 * @n: number of  bytes
 * Return: returns ponter to copy location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
			src++;
		dest++;
	}
	return (start);
}
