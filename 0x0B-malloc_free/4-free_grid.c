#include <stdio.h>
#include "holberton.h"

/**
 * free_grid - frees grid created by the alloc_grid function
 * @grid: double pointer to array
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
