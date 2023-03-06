#include "main.h"
#include "stdio.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer
 * @b: character
 * @n: number of element
 * Return: Always
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + 1) = b;

	return (s);
}
