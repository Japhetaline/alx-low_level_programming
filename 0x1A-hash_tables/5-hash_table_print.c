#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/*int not_last_node(const hash_table_t *ht, hash_node_t *node);*/

/**
 * hash_table_print - Displays the contents of a hash table.
 * @ht: The hash table to be printed.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int k, prev = 0;
	hash_node_t *fork = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	if (ht)
	{
		for (k = 0; k < ht->size - 1; k++)
		{
			if (ht->array[k] != NULL)
				prev = k;
		}

		for (k = 0; k <= prev; k++)
		{
			fork = ht->array[k];
			while (fork)
			{
				printf("'%s': '%s'", fork->key, fork->value);
				fork = fork->next;
				if (k < prev - 1)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
