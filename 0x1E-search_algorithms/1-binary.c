#include "search_algos.h"

/**
 * binary_search - This is a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: This a pointer to the first element of the array
 * @size: This is the number of elements in the array
 * @value: This is value to search for
 *
 * Return: return value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t j, b, n = 0;
	size_t k = size - 1;

	if (array == NULL)
		return (-1);

	while (n <= k)
	{
		printf("Searching in array: ");

		b = n;
		while (b < k)
		{
			printf("%i, ", array[b]);
			b++;
		}
		printf("%i\n", array[b]);

		j = (n + k) / 2;

		if (array[j] == value)
			return (j);
		else if (value > array[j])
			n = j + 1;
		else
			k = j - 1;
	}

	return (-1);
}
