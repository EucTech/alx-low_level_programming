#include "main.h"

/**
 * _isdigit - write a function that checks for digit
 * @c: number
 * Return: Always
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
