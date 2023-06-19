#include "main.h"

/**
 * _abs - To write a function that computes the absolute value of an integer
 * @i: To print a function
 * Return: Always
 */

int _abs(int i)
{
	int j = i;

	if (j < 0)
	{
		return (-j);
	}
	else
	{
		return (j);
	}
}
