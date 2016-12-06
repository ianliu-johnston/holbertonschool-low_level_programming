#include <stdio.h>
#include "holberton.h"
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
	print_binary(11);
	printf("\n");
    print_binary(98);
    printf("\n");
	print_binary(UINT_MAX + 1);
    printf("\n");
    print_binary((1 << 14) + 8);
    printf("\n");
    return (0);
}
