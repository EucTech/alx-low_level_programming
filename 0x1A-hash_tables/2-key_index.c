#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key
 * @key: This is the key
 * @size: This is the size
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_v = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
