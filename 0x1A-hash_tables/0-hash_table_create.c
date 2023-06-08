#include "hash_tables.h"
#include <stdlib.h>

/**
 * create_hash_table - A function that creates a new hash table.
 * @size: The size of the hash table.
 * Return: A pointer to the newly allocated hash table in memory.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int k;
	hash_table_t *hashTable = NULL;

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
		return (NULL);
	hashTable->size = size;
	hashTable->array= malloc(sizeof(hash_node_t *) * size);
	if (!hashTable->array)
	{
		free(hashTable);
		return (NULL);
	}
	for (k = 0; k < size; k++)
		(hashTable->array)[k] = NULL;
	return (hashTable);
}
