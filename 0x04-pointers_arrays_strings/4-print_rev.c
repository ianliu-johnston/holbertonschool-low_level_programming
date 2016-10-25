#include <stdio.h>
#include "holberton.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @*str: input string to print.
 */
void print_rev(char *s)
{
	int i, count, temp;

	while(*s != '\0')
	{
		i++;
		s++;
	}

	for (count = i; count > 0; count --)
	{
		temp = *s;
		_putchar(temp);
	}
	_putchar('\n');
}
