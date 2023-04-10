#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the integer
 * @index: The given index
 * Return: Return the value of the index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
