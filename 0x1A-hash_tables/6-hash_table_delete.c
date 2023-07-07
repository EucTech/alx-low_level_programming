#include "hash_tables.h"

/**
 * hash_table_delete - This is a function that deletes a hash table.
 * @ht: This is a hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hold, *hold_2;
	unsigned long int k;

	if (!ht)
		return;

	for (k = 0; k < ht->size; k++)
	{
		hold = ht->array[k];
		while ((hold_2 = hold) != NULL)
		{
			hold = hold->next;
			free(hold_2->key);
			free(hold_2->value);
			free(hold_2):
		}
	}
	free(ht->array);
	free(ht);
}
