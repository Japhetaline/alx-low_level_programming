#include "main.h"

/**
 * _isupper - function that check upper character
 * @c: parameter to be printed
 * Return:To be 1 otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
