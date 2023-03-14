#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function use to free a 2 dimensional gitd function
 * @grid: 2 dimensional array to free
 * @height: input height (size)
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
