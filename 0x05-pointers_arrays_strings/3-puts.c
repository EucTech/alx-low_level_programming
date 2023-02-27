#include "main.h"
/**
 * _puts - write a function that prints a string
 * @str: string
 * Return: Always
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
