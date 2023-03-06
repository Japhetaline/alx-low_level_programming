#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locate character in a string
 * @s: an input string to search in
 * @c: an input character to loacte into string s
 * Return: return pointer to c position
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
