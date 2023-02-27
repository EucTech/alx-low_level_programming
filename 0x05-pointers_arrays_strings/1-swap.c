#include "main.h"
/**
 * swap_int - to write a function that swaps te valus of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: Always
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
