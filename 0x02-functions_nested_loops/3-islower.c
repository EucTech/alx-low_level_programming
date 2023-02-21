#include "main.h"

/**
 * _islower - To check lowercase of an alphabet
 * @c: To check whether is lowcase
 * Return: Always
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
