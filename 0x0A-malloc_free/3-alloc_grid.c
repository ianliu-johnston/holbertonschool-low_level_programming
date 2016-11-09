#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - creates a 2-D integer grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to 2-D integer grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	p = (int **)malloc(width * sizeof(p));
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(height * sizeof(int));
		for (j = 0; j < height; j++)
			p[i][j] = 0;
	}
	return (p);
}
