#include "hash_tables.h"

/**
 * key_index - A function that calculates the
 * normalized index for a given key.
 * @key: The key to be processed.
 * @size: The size of the hash table.
 * Return: The normalized index for the key in the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int token = 0;

	token = hash_djb2((unsigned char *)key);
	return (token % size);
}
