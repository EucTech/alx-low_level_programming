#include "main.h"
/**
 * more_numbers - print function that prints 10 times the number from 0 to 14
 * Return: Always
 */

void more_numbers(void)
{
	int j, i;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j >= 10)
	{
		_putchar((j / 10) + '0');
	}
		_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}
