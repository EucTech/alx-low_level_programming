#include "hash_tables.h"
/**
 * hash_table_create - This is a function that creates a hash table
 * @size: This is the size
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int j = 0;

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	while (j < size)
	{
		hash_table->array[j] = NULL;
		j++;
	}

	hash_table->size = size;

	return (hash_table);
}
