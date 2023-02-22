#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - To print all natural number from n to 98
 * @n: n number
 * Return: Always
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
	for (n = 0; n <= 98; n++)
	{
	if (n == 98)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
	else
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	}
	}
	else
	{
		for (n = 0; n >= 98; n--)
		{
		if (n == 98)
		{
			_putchar(n + '0');
			_putchar('\n');
		}
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		}
	}
}

