#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 *
 * @key: is the key
 *
 * @value: is the value
 *
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current;
	unsigned long int index;

	if (key == NULL)
		return (0);

	if (ht == NULL || ht->size == 0 || ht->array == NULL || strlen(key) == 0)
		return (0);

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		current = ht->array[index];

		while (current)
		{
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
		}

		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
