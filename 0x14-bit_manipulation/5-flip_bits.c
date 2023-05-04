#include "main.h"
#include <stdio.h>

/**
 * flip_bits - This is a function that returns the number of bits
 * @n: the number
 * @m: the second number
 * Return: The number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f_num = n ^ m;
	int count = 0;

	while (f_num > 0)
	{
		count++;
		f_num &= (f_num - 1);
	}
	return (count);
}
