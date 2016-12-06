#include "holberton.h"
#include <stdio.h>
/**
  * print_binary - converts a decimal number to binary
  * @n: integer to convert
  */
void print_binary(unsigned long int n)
{
	unsigned long int len, expo;

	if (n == 0)
		_putchar('0');
	for (expo = 1, len = 0; expo <= n; len++, expo *= 2)
		n & (1 << len) ? _putchar('1') : _putchar('0');
}
