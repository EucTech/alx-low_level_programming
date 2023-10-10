#include "search_algos.h"

/**
 * linear_search - This a function that searches for a value in
 * an array of integers using the Linear search algorithm
 * @array: This a pointer to the first element to search
 * @size: This is the size elements in the array
 * @value: The value to search
 * Return: first value or 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t k = 0;

	if (array == NULL)
	{
		return (-1);
	}

	if (array)
	{
		while (k < size)
		{
			printf("Value checked array[%lu] = [%d]\n", k, array[k]);

			if (array[k] == value)
			{
				return (k);
			}

			k++;
		}
	}

	return (-1);
}
