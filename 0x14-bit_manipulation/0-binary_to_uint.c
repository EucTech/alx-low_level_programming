#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - This is a function that converts
 * a binary to an integer
 * @b: This is the a pointer to string of 1 and 0
 * Return: Return convert nuumber
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int b_num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	
		b_num = b_num << 1;
		if (b[i] == '1')
			b_num |= 1;
		i++;
	}

	return (b_num);
}
