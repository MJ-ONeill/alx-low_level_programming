#include "hash_tables.h"

/**
 * hash_table_get - gets values associated with key
 *
 * @ht: Hash Table
 *
 * @key: is the key
 *
 * Return: Returns the value associated with the element, or NULL
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	current = ht->array[idx];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
