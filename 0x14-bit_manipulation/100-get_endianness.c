#include "main.h"
#include <stdio.h>

/**
 * get_endianness - This a function that checks the endianess
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int a = 1;
	char *c = (char *)&a;

	return (*c == 1);
}
