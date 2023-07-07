#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * @ht: The hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int k;
	char *val;
	hash_node *tem;

	if (!ht)
		return;

	printf("{");
	val = "";

	for (k = 0; k < ht->size; k++)
	{
		tem = ht->array[k];
		while (tem != NULL)
		{
			printf("%s'%s: '%s'", val, tem->key, tem->value);
			val = ", ";
			tem = tem->next;
		}
	}
	printf("}\n");
}
