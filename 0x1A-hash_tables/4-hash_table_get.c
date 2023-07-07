#include "hash_tables.h"

/**
 * hash_table_get - This is a function that
 * retrieves a value associated with a key
 * @ht: The hash table
 * @key: This is the key
 * Return: NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tem = NULL;

	if (key == NULL)
		return (NULL);

	if (ht)
	{
		index = key_index((const unsigned char *)key, ht->size);
		tem = ht->array[index];

		while (tem)
		{
			if (strcmp(tem->key, key) == 0)
				return (tem->value);
			tem = tem->next;
		}
	}

	return (NULL);
}
