#include <stdlib.h>
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

	p = (int **)malloc(height * sizeof(p));
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
