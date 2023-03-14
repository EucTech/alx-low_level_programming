#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integer
 * @width: width
 * @height: height
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **dim;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dim = malloc(sizeof(int *) * height);
	if (dim == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		dim[i] = malloc(sizeof(int) * width);
		if (dim[i] == NULL)
		{
			while (i >= 0)
			{
				free(dim[j--]);
			}
			free(dim);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			dim[i][j] = 0;
	}
	return (dim);
}
