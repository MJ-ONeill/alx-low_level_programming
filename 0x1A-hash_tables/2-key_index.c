#include "hash_tables.h"

/**
 *key_index - Computes the index at which the key/value pair should be stored
 *@key: is the key
 *@size: size of thr array
 *
 *Return: index to store
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (key != NULL && size != 0)
	{
		idx = hash_djb2(key) % size;
	}

	return (idx);
}
