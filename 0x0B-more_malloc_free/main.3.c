#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int start, unsigned int size)
{
	if (buffer != NULL)
	{
		while (start < size)
		{
			if (start % 10)
				printf(" ");
			if (!(start % 10) && start)
				printf("\n");
			printf("%020d", buffer[start]);
			start++;
		}
		printf("\n");
	}
	else
		printf("exiting simple_print_function\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(INT_MIN, INT_MIN + 100);
    simple_print_buffer(a, 0, 100);
    free(a);
    return (0);
}
