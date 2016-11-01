#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: which diagonal to add.
 */

void print_diagsums(char *a, int size)
{
	int i, sum, next;

	i = sum = next = 0; 

	while (i < (size * size))
	{
		printf("i = %d, sum = %d\n", i, sum);
		next = a[i];
		sum += next;
		i += size + 1;
	}
	printf("%d, ", sum);
	i = size - 1;
	sum = 0;
	while (i < (size * size - 1))
	{
		printf("i = %d, sum = %d\n", i, sum);
		next = a[i];	
		sum += next;
		i += size - 1;	
	}
	printf("%d\n", sum);
}
