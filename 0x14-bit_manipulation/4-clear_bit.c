#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to a given index
 * @n: pointer to the integer
 * @index: the index
 * Return: 1 if works, and -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*unsigned long int num;*/

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*num = 0 << index;*/
	*n = *n & ~(1 << index);

	return (1);
}
