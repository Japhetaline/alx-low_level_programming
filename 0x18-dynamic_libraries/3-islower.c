#include "main.h"

/**
 * _islower - function that check lower character
 * @c: parameter to be printed
 * Return:To be 1 otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
