#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void swap(int *xp, int *yp);

void bubble_sort(int *array, size_t size);

int main(void)
{

	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

	size_t n = sizeof(array) / sizeof(array[0]);

	bubble_sort(array, n);
	return (0);
}


void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}


void bubble_sort(int *array, size_t size)
{
  size_t i, j, k, temp;

  printf("\nUnsorted array:");

  for (k = 0; k < size; k++)
  {
	printf("%5d,", array[k]);
  }
  //* the 1st iteration move the largest element at the end of the list*//
  for (i = 1; i < size; i++)
  {
    //* size -1 not to get out of index*//
    //* the 2nd iteration move the 2nd largest element to the 2nd last position *//
    for (j = 0; j < size - 1; j++) //*last i elements are already in place*//
    {
      if (array[j] > array[j + 1])
      {
      	swap(&array[j], &array[j + 1]);

      }
    }
  }
  printf("\nAfter pass %lu : ", i);
  for (k = 0; k < size; k++)
  {
  printf("%5d,", array[k]);
  }
}
