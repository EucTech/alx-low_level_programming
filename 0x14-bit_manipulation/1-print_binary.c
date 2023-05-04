#include "main.h"
#include <stdio.h>

/**
 * print_binary - A function that prints binary representation of a number
 * @n: This is the argumnent
 * Return: the number
 */
void print_binary(unsigned long int n)
{
	int j;
	int u = sizeof(unsigned long int) * 8;
	unsigned long int p_num = 1;

	for (j = u -1; j >= 0; j--)
	{
		if ((n & (1UL << j)) != 0)
		{
			p_num = 1UL << j;
			break;
		}
	}

	while (p_num != 0)
	{
		if ((n & p_num) != 0)
			_putchar('1');
		else
			_putchar('0');

		p_num >>= 1;
	}
}
