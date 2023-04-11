#include "main.h"
#include <stdlib.h>
/**
* free_grid - function to free grid created above
* @grid: grid
* @height: height of the grid
* Return: free grid
*/
void free_grid(int **grid, int height)
{
	int i;


	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

