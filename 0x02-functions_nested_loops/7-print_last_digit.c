#include "main.h"

/**
 * print_last_digit - To print the last digit of a number
 * @n: The number to print the last digit
 * Return: Always
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i *= -1;
	}

	_putchar(i + '0');
	return (i);
}
