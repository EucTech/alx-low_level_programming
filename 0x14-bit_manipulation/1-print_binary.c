#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: integer
 * Return: the binary represention
 */

void print_binary(unsigned long int n)
{
	unsigned long int b = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (b > 0)
	{
		if (n & b)
			_putchar('1');
		else
			_putchar('0');

		b >>= 1;
	}
}
