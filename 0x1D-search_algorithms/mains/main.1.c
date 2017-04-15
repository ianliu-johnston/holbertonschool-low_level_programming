#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

/*
	size_t i;
    size_t size2 = 24;
	int *arr2;
	arr2 = malloc(sizeof(int) * size2);
	for (i = 0; i < size2; i++)
		arr2[i] = i << 2;

    printf("Found %d at index: %d\n\n\n", 4, binary_search(arr2, size2, 4));
    printf("Found %d at index: %d\n\n\n", 24, binary_search(arr2, size2, 24));
    printf("Found %d at index: %d\n\n\n", 88, binary_search(arr2, size2, 48));
	free(arr2);
	*/

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 4, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
