#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - This is a function that converts a number to binary
 * @b: This is a pointer to const char
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int binary_num = 0;

	if (b == NULL)
		return (0);

	len = 0;

	while (b[len] != '\0')
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);

		binary_num *= 2;

		if (b[len] == '1')
			binary_num |= 1;

		len++;
	}

	return (binary_num);
}
