#include "main.h"
#include <stdlib.h>

/**
 * Description: free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: int input parameter
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int sham;

	for (sham = 0; sham < height; sham++)
		free(grid[sham]);
	free(grid);
}
