#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: which diagonal to add. 
 */

void print_diagsums(char *a, int size) 
{
	int i, j;

	while (i < size)
	{
		while (j <= i )
		{
			printf("%d, ", a[i] + a[j]);	
			j++;
		}
		i++;
	}
}
