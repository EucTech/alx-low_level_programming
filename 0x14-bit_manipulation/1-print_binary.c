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
	/*unsigned long int rep;*/

	if (n > 1)
		print_binary(n / 2);

	_putchar('0' + n % 2);
}
