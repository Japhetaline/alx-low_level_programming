#include "main.h"
#include <stddef.h>

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
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
