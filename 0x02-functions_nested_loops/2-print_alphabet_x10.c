#include "main.h"

/**
 * print_alphabet_x10 - To print alphabet x10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a, b;

	for (b = 0; b <= 9; b++)
	{
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	}
}
