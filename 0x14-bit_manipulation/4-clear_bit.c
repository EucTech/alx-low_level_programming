#include "main.h"
#include <stdio.h>

/**
 * clear_bit - a function that set the value of a bit to 0 at a given index
 * @n: This is the number
 * @index: This is the index
 * Return: if successuff 1, failed -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
