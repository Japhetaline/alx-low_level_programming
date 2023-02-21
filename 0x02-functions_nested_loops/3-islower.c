#include "main.h"

/**
 * is_lower - function that check lower character
 *
 * Return:To be 1 otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
