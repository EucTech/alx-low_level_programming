#include "main.h"
/**
 * puts_half - a funtion that prints half of string
 * @str: string
 * Return: Always
 */

void puts_half(char *str)
{
	int n, m, l;

	l = 0;

	for (n = 0; str[n] != '\0'; n++)
	{
		l++;	
	}
	m = (l / 2);

	if ((l % 2) == 1)
	{
		m = ((l + 1) / 2);
	}

	for (n = m; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
