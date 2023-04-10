#include <stdio.h>
#include "main.h"

/**
 * set_bet - a function that set valule of a bit to 1 at a given index
 * @n: is a pointer to integer
 * @index: the index of the bit
 * Return: 1 if works or -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{	
	unsigned long int num;
	
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	num = 1UL << index;
	*n |= num;

	return (1);
}
