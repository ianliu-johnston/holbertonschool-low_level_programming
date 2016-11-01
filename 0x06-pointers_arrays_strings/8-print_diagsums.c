#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: which diagonal to add.
 */

void print_diagsums(char *a, int size)
{
	int i, j, resx, resy;

	i = resx = resy = 0;
	while (i <= size)
	{
		while (j <= size)
		{
			if (i == j)
				resx += a[i][j];
		j++;
		}
		while (j >= 0)
		{
			if (i == j)
				resy += a[i][j];
			j--;
		}
		i++;
	}
	printf("%d, %d\n", resx, resy);
}
