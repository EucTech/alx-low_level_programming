#include "main.h"
/**
 * puts2 - write a function that prints every other character of a string
 * @str: string
 * Return: Always
 */

void puts2(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
		{
			_putchar(str[n]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
