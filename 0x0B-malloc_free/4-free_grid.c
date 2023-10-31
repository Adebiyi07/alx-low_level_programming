#include "main.h"

/**
 * free_grid - function to free memory
 * for 2d dimension grid created in previous
 * alloc_grid function
 * @grid: 2d grid
 * @height: height parameter
 * Return: returns 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
