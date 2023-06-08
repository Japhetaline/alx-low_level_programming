#include "hash_tables.h"

/**
 * hash_djb2 - A function that generates the hash value
 * for a given key.
 * @str: The key to be hashed.
 * Return: The index in the hash table
 * corresponding to the hashed key.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
