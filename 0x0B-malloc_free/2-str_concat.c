#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: A pointer to the concatenated strings or NULL if it is NULL
 */
char *str_concat(char *s1, char *s2)
{
	int lens1 = 0, lens2 = 0;
	char *new_str, *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lens1] != '\0')
		lens1++;
	while (s2[lens2] != '\0')
		lens2++;

	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (new_str == NULL)
		return (NULL);

	p = new_str;
	while (*s1 != '\0')
		*p++ = *s1++;
	while (*s2 != '\0')
		*p++ = *s2++;

	*p = '\0';
	return (new_str);
}

