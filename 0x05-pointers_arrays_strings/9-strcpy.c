#include "main.h"

/**
 * _strcpy - a function that copies the strings pointed to
 * by src, including the terminating null byte(\0),
 * to the buffer pointed to by dest
 * @dest: a pointer to destination of string
 * @src: a pointer to source string from.
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *led = dest;

	while (*src)
		*dest++ = *src++;
	return (led);
}
