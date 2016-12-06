#include "holberton.h"
#include <stdio.h>
/**
  * print_binary - converts a decimal number to binary
  * @n: integer to convert
  */
void print_binary(unsigned long int n)
{
	unsigned long int i, expo;

	if (n == 0)
		_putchar('0');
	for (expo = 1, i = 0; expo <= n; expo *= 2, i++)
		;
	for (i--, expo = 1; i > 0; i--, expo *= 2)
		(n & (1 << i)) ? _putchar('1') : _putchar('0');
}
