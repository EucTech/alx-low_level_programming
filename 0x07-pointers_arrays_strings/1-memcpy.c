#include "main.h"
/**
 * _memcpy - write a function tat copies memory area
 * @dest: the destination
 * @src: source
 * @n: number of byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = *src;

	return (dest);
}
