#include "main.h"

/**
 * _isupper - write a function that checks for uppercase character
 * @c: uppercase
 * Return: Alawys
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
