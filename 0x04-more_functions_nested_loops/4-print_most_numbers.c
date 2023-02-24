#include "main.h"
/**
 * print_most_numbers - To write a function that prints 0 to 9 expect 2 and 4
 * Return: Always
 */

void print_most_numbers(void)
{
	int k;

	k = 0;

	while (k < 10)
	{
	if (k != 2 && k != 4)
	{
		_putchar(k + '0');
	}
		k++;
	}
		_putchar('\n');
}
