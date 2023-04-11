#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - function returning a pointer to a 2d array
* @width: number of rows
* @height: number of columns
* Return: pointer to the 2d array
*/
int **alloc_grid(int width, int height)
{
	int **n;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	n = malloc(height * sizeof(int *));

	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		n[i] = (int *) malloc(width * sizeof(int));

		if (n[i] == NULL)
		{
			for (; i >= 0; i--)
				free(n[i]);

			free(n);

		return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			n[i][j] = 0;
		}
	}
	return (n);
}
