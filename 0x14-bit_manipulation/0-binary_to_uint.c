#include <stdio.h>
#include "main.h"
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - This is a function that converts
 * a binary to an integer
 * @b: This is the a pointer to string of 1 and 0
 * Return: Return convert nuumber
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int s_length = strlen(b);
	unsigned int b_num = 0;
	unsigned int num2 = 1;
	int i;

	for (i = (s_length - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			b_num += num2;
		num2 *= 2;
	}
	return (b_num);
}
