#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * binary_to_uint - This is a function that converts
 * a binary to an integer
 * @b: This is the a pointer to string of 1 and 0
 * Return: Return convert nuumber
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int b_num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		
		b_num = b_num << 1;
		if (b[i] == '1')
			b_num |= 1;
	}

	return (b_num);
}
