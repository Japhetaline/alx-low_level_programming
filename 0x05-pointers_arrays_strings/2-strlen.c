#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that return length of a string
 * @s: an input string
 * Return: nothing
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
