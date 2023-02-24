#include "main.h"
/**
 * print_numbers - To write a function that prints te number from 0 to 9
 * Return: Always
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
