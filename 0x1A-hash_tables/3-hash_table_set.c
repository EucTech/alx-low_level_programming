#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: This is the hash table
 * @key: This is the key
 * @value: This is the value
 * Return: int value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *tem_v = NULL;
	hash_node_t *temp = NULL;
	hash_node_t *n_hash = NULL;

	if (ht == NULL || ht->array || value == NULL)
		return (0);

	if (strlen(key) == 0 || key == NULL)
		return (0);

	tem_v = strdup(value);
	if (tem_v == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = tem_v;
			temp->value = strdup(value);
			free(tem_v);
			return (1);
		}
		temp = temp->next;
	}
	n_hash = malloc(sizeof(hash_node_t));
	if (n_hash == NULL)
	{
		free(n_hash);
		return (0);
	}
	n_hash->key = strdup(key);
	n_hash->value = tem_v;
	n_hash->next = ht->array[index];
	ht->array[index] = n_hash;
	return (1);
}
