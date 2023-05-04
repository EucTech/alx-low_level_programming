#include "main.h"
#include <stdio.h>

/**
 * set_bit - a function that set the value of a bit to 1 at a given index
 * @n: This is the integer
 * @index: This is the index
 * Return: The value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int valu;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	valu = 1UL << index;
	*n |= valu;

	return (1);
}
