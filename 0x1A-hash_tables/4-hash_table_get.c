#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - A function that retrieves the value
 * associated with a key from a hash table.
 * @ht: A pointer to the hash table from which
 * the value will be retrieved.
 * @key: The key for which the associated value is requested.
 * Return: The value associated with the key,
 * or NULL if the key is not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int token = 0;
	char *worth = NULL;
	hash_node_t *fork;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	token = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[token] == NULL)
		return (NULL);


	fork = ht->array[token];
	while (!worth)
	{
		if (strcmp(fork->key, key) == 0)
			worth = fork->value;
		fork = fork->next;
	}
	return (worth);
}
