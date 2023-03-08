#include "main.h"
/**
 * _pow_recursion - a function that returns x the raside to power of y
 * @x: input
 * @y: input
 * Return: values
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
