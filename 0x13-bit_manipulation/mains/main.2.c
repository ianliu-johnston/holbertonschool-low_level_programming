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
    int n, i, stat;
	unsigned long int target;

	target = 5;
	for (i = 12; i >= 0; i--)
	{
		n = get_bit(target, i);
		printf("bit at %d of %lu: %d\n", i, target, n);
		stat = clear_bit(&target, i);
		n = get_bit(target, i);
		printf("bit at %d of %lu: %d, status: %d\n", i, target, n, stat);
	}
	print_binary(target);
    return (0);
}
