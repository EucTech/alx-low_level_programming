#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array using malloc
 * @nmemb: number of element to be allocated
 * @size: the size of the elements
 * Return: A pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)arr + i) = 0;

	return (arr);
}
