#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid input
 * @height: height input
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
	{
		free(grid[l]);
	}
	free(grid);
}
