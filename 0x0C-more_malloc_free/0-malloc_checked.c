#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocate memory using malloc
 * @b: an unsigned input integar
 * Return: Appointer to allocate memory or NULL if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
