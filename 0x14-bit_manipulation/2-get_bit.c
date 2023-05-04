#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: This is the numeber
 * @index: THe index
 * Return: The value of the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
