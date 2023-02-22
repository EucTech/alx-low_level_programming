#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - To print all natural number from n to 98
 * @n: n number
 * Return: Always
 */

void print_to_98(int n)
{
	if (n > 98)
	{
	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
	}
	else if (n < 98)
	{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
	}
	printf("%d\n", n);
}
