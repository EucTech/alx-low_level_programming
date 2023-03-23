#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that print a numnber
 * @separator: string
 * @n: integer
 * Return: number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, unsigned int));
		if (separator != NULL && i != n-1)
			printf("%s", separator);
	}

	va_end(arg);

	printf("\n");
}
