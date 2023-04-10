#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that return a number of bits to flip
 * to get from one number to another
 * @n: the integer
 * @m: integer
 * Return: number of bit need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int len = 0;
	unsigned long int flip_num = n ^ m;

	while (flip_num > 0)
	{
		len++;
		flip_num &= (flip_num - 1);
	}
		return (len);
}
