#include "hash_tables.h"

/**
 * hash_table_print - print key/value pairs
 *
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *current;
	int flag = 0;

	if (ht != NULL)
	{
	printf("{");

	while (idx < ht->size)
	{
		current = ht->array[idx];

		while (current)
		{
			if (flag == 1)
				printf(", ");
			flag = 1;

			printf("'%s': '%s'", current->key, current->value);

			current = current->next;
		}
		idx++;
	}

	printf("}\n");
	}
}
