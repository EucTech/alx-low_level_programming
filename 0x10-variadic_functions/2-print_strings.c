#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints a string
 * @separator: string
 * @n: integer
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		const char *x = va_arg(arg, const char *);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(arg);

	printf("\n");
}
