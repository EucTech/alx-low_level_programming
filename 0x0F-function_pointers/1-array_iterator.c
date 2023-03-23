#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function to execute a give parameter
 * @array: array to process
 * @size: size of an arry
 * @action: function to execute on each element of the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
