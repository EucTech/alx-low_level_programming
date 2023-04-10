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
	int b = sizeof(unsigned long int) * 8;
	int k;
	unsigned long int num = 0;

	for (k = b - 1; k >= 0; k--)
	{
		if ((n & (1UL << k)) != 0)
		{
			num = 1UL << k;
			break;
		}
	}

	while (num != 0)
	{
		if ((n & num) != 0)
			_putchar('1');
		else
			_putchar('0');

		num >>= 1;
	}
}
