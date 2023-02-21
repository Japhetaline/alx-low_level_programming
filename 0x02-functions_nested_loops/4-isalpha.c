#include "main.h"

/**
 * _isalpha - function that check lower character
 * @c: parameter to be printed
 * Return:To be 1 otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
