#include "holberton.h"
/**
  * print_binary - converts a decimal number to binary
  * @n: integer to convert
  */
void print_binary(unsigned long int n)
{
	unsigned long int expo;
	int i;

	if (n == 0)
		_putchar('0');
	for (expo = 1, i = 0; expo <= n; expo *= 2, i++)
		;
	i--;
	for (; i >= 0; i--)
		((n >> i) & 1) ? _putchar('1') : _putchar('0');
}
