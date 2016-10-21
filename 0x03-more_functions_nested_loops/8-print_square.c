#include "holberton.h"
/**
 * print_square - draws a square using multiple terminal lines and #'s.
 * @n: the number of # to print in each line.
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
