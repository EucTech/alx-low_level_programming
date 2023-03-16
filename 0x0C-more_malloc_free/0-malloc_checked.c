#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a program that allocates memmory
 * @b: size of unsigned int
 * Return: A pointer
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
